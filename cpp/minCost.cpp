#include<bits/stdc++.h>
using namespace std;

class MinCostPath
{
    int i, j;
    public:
        int minCost(int cost[3][3], int m, int n);
};

int MinCostPath::minCost(int cost[3][3], int m, int n)
{
    int tc[3][3];
    tc[0][0] = cost[0][0];
    for(i = 1; i<=m; i++)
    {
        tc[i][0] = tc[i-1][0] + cost[i][0];
    }
    for(j = 1; j<=n; j++)
    {
        tc[0][j] = tc[0][j-1] + cost[0][j];
    }
    for(i = 1; i<=m; i++)
        for(j = 1; j<=n; j++)
        {
            tc[i][j] = min(tc[i-1][j-1], min(tc[i-1][j], tc[i][j-1])) + cost[i][j];
        }
    return tc[m][n];
}

int main()
{
    MinCostPath ob;
    int cost[3][3] = {{1,2,3},
                      {4,8,2},
                      {1,5,3}};
    cout<<ob.minCost(cost, 2, 2);
    return 0;
}