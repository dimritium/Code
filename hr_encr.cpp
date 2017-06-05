#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

pair<int, int> find_lr(int len){
    pair<int, int> res;
    int l = floor(sqrt(len));
    int r = ceil(sqrt(len));
    while((l*r)<len){
        l=l+1;
    }
    res = make_pair(l,r);
    return res;
} 
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    pair<int, int> lr;
    lr = find_lr(s.length());
    int row = lr.first, k=0;
    int col = lr.second;
    char arr[row][col]={};
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++){
            if(k<len){
            arr[i][j] = s[k];
            k++;
            }
            else{
                arr[i][j] = ' ';
            }
        }
    }
    cout<<(arr[2][6]==' ')<<endl;
    cout<<col<<" "<<row<<endl;
    string res ="";
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++)
        {
            if(arr[j][i]!=' ')
            {
            res+=arr[j][i];
            }
        }
        res+=" ";
    }
    cout<<res;
}