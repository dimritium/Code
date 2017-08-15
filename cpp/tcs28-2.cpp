#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int tr,tc;  
    int m,n;
    cin>>m>>n;
    cin>>tr>>tc;
    tr-=1;
    tc-=1;
    int move_x[] = {1,-1,1,-1, 1,-1, 0,0};
    int move_y[] = {0, 0,1,-1,-1, 1,-1,1};
    int arr[m][n];
    vector<pair<int,int> >pos;
    for(int row = 0; row<m; row++)
        for(int col = 0; col<n; col++){
            char x;
            cin>>x;
            if(x == 'T'){
                arr[row][col] = 1;
                // pos.push_back(make_pair(row,col));
            }
            else if(x == 'W')
                arr[row][col] = 0;
    }

    // cout<<"HI";
    // cout<<arr[2][2];
    int time = 0;
    for(int i = 0; i<8; i++){
        int nex_x = tr+move_x[i];
        int nex_y = tc+move_y[i];
        if(nex_x >=0 && nex_x<m && nex_y>=0 && nex_y<n && arr[nex_x][nex_y]){
            pos.push_back(make_pair(nex_x, nex_y));
            arr[nex_x][nex_y] = 0;
        }
        // if(nextTree(tr+move_x[i],tc+move_y[i],(int *)arr,m,n)){
        //     pos.push_back(make_pair(tr+move_x[i],tc+move_y[i]));
        // }
    }
    // cout<<endl;
    // for(int i = 0;i<pos.size(); i++)
    //     cout<<pos[i].first<<" "<<pos[i].second;
    vector<pair<int,int> >new_pos;
    
    while(1){
        time++;
        int fl = 0;
        for(size_t i = 0; i<pos.size(); i++){
            for(int k = 0; k<8; k++){
                int nex_x = pos[i].first+move_x[k];
                int nex_y = pos[i].second+move_y[k];
                if(nex_x >=0 && nex_x<m && nex_y>=0 && nex_y<n && arr[nex_x][nex_y]){
                    fl = 1;
                    new_pos.push_back(make_pair(nex_x, nex_y));
                    arr[nex_x][nex_y] = 0;
                }
            }
        }
        if(fl == 0)
            break;
        pos.erase(pos.begin(),pos.end());
        pos = new_pos;
        new_pos.erase(new_pos.begin(), new_pos.end());
    }
    cout<<time+1;
}