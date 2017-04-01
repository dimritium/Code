#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back
#define N 8
using namespace std;

int solveKTUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

bool isSafe(int x, int y, int sol[N][N])
{
	return (x>=0 && x<N && y>0 && y<N && sol[x][y] == -1);
}
int main()
{
	this;
}