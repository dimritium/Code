#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
int main()
{
    int X,Y,tc;
    cin>>tc;
    while(tc--)
    {
    cin>>X>>Y;
    long long int NumWays[X][Y];
    NumWays[0][0]=1;
    F(j,1,Y-1)
    NumWays[0][j]=1;
    F(i,1,X-1)
    NumWays[i][0]=1;
    F(i,1,X-1)
    {
        F(j,1,Y-1)
        {
            NumWays[i][j]=NumWays[i-1][j]+NumWays[i][j-1];
        }
    }
    cout<<NumWays[X-1][Y-1]<<"\n";
    }
    return 0;
}
