#include <iostream>
using namespace std;

void init(int arr[n+1][n+1],int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            arr[i][j]=0;
        }
    }
}
int main()
{
    int tc;
    long long int n,m;
    cin>>tc;
    while(tc--){
        long long int res = 0;
        cin>>n>>m;
        string s;
        cin>>s;
        int arr[n+1][n+1];
        init(arr,n);
        for(int i=1;i<=n;i++){
            bool cmbu = false;
            for(int j=1;j<=n;j++){
                if(s[i-1]==s[j-1]){
                    cmbu=true;
                    arr[i][j] = 1+arr[i-1][j-1];
                    res = max(res,arr[i][j]);
                }
                else{
                    if(cmbu && m>0){
                        m = m-1;
                        arr[i][j] = 1+arr[i-1][j-1];
                        res = max(res,arr[i][j]);
                    }
                    else{
                        arr[i][j] = arr[i-1][j-1];
                    }
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
