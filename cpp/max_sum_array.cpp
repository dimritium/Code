#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

const int MAX = 100;
int dp[MAX][MAX];
int LargestSum(int mat[][MAX],int i, int j, int n){
    
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    if(i == n-1)
        return (dp[i][j] = mat[i][j]);
    
    int zzs = 0;
    
    for(int k = 0;k<n;k++)
        if (k!=j)
           zzs = max(zzs, LargestSum(mat,i+1,k,n));

    return (dp[i][j] = (zzs+mat[i][j]));
}

int Largest(int mat[][MAX],int n){
    memset(dp,-1,sizeof(dp));
    int res = 0;
    for(int j = 0; j<n; j++){
        res = max(res,LargestSum(mat,0,j,n));
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int mat[n][MAX];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++){
                cin>>mat[i][j];
            }
        cout<<Largest(mat,n)<<endl;
    }
}