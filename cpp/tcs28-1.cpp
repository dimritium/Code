#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int valid_move(int x,int y,int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return 1;
    return 0;
}
int main()
{
    int k;
    cin>>k;
    int arr[k][k];
    int mov_bx[] = {1,-1,0, 0};
    int mov_by[] = {0, 0,1,-1};
    vector<pair<int, int> >res;
    int pos_ax, pos_ay, pos_bx, pos_by;
    cin>>pos_ax>>pos_ay;
    cin>>pos_bx>>pos_by;
    for(int i = 0; i<k; i++){
        for(int j = 0; j<k; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<4; i++){
        int bx = mov_bx[i];
        int by = mov_by[i];
        int new_bx = pos_bx+bx;
        int new_by = pos_by+by;
        int count = 0, poles = 0;
        while(valid_move(new_bx,new_by,k)){
            // cout<<"w "<<i<<" "<<new_bx<<" "<<new_by<<" "<<count;
            if(new_bx == pos_ax && new_by == pos_ay){
                count++;
                res.push_back(make_pair(count,poles));
                break;
            }
            else if(arr[new_bx][new_by] == 0){
                count++;
            }
            else if(arr[new_bx][new_by] == 1){
                count++;
                poles++;
                if(bx == 1){
                    bx = 0;
                    by = -1;
                }
                else if(bx == -1){
                    bx =  0;
                    by = 1;
                }
                else if(by == 1){
                    by = 0;
                    bx = -1;
                }
                else if(by == -1){
                    bx = 1;
                    by = 0;
                }
            }
            else if(arr[new_bx][new_by] == 2){
                count++;
                poles++;
                if(by == 1){
                    by = 0;
                    bx = 1;
                }
                else if(by == -1){
                    by = 0;
                    bx = -1;
                }
                else if(bx == 1){
                    bx = 0;
                    by = 1;
                }
                else if(bx == -1){
                    bx = 0;
                    by = -1;
                }
            }
            new_bx += bx;
            new_by += by;
        }
        // cout<<endl;
    }
    
    if(res.size()==0)
        cout<<-1;
    else{
        sort(res.begin(),res.end());
        // cout<<"RES "<<res[0].first<<" "<<res[0].second<<endl;
        int count = res[0].first;
        int poles = res[0].second;
        for(size_t i = 1; i<res.size(); i++)
        {
            if(res[i].first == count && res[i].second<poles){
                    poles = poles;
            }
            else
                break;
        }
        cout<<count<<" "<<poles;
    }
}