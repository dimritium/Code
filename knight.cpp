#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

bool inside(int x,int y,int n);

int dx[] = {2, 2,-2,-2,-1,1,-1, 1};
int dy[] = {1,-1, 1,-1, 2,2,-2,-2};

bool inside(int x,int y,int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

double findProb(int start_x, int start_y, int steps, int n){
    double dp[n][n][n];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++){
            dp[i][j][0] = 1;
        }

    for(int i = 1; i<=steps; i++){
        for(int x = 0; x<n; x++){
            for(int y = 0; y<n; y++){
                double prob = 0.0;
                for(int k = 0; k<8; k++){
                    int nx = x+dx[k];
                    int ny = y+dy[k];
                    if(inside(nx,ny,n))
                        prob += dp[nx][ny][i-1]/8;
                }
                    dp[x][y][i] = prob;
                }
            }
        }
        return dp[start_x][start_y][steps];    
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,k,x,y;
        cin>>n>>x>>y>>k;
        printf("%0.6f\n",findProb(x,y,k,n));
    }
}