#include<iostream>
using namespace std;
const int MOD=1000000007;
const int MAX=500;
int comb[MAX][MAX];
int main()
{
    comb[0][0]=1;
    for(int i=1;i<MAX;i++)
        comb[i][0]=1;
    for(int i=1;i<MAX;i++)
        comb[0][i]=1;
        for(int i=1;i<MAX;i++)
        {
            for(int j=1;j<MAX;j++)
                comb[i][j]=(comb[i][j-1]+comb[i-1][j])%MOD;
        }
        int tc;
        cin>>tc;
        while(tc--)
        {
            int n,m;
            cin>>n>>m;
            cout<<comb[n][m]<<"\n";
        }
        return 0;
}
