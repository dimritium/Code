#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

void dfs(int a)
{
	visited[a]=1;
	for(i=0;i<adj[a].size();i++)
	{
		if(visited[adj[a][i]]==0)
			dfs(adj[a][i]);
	}
}
int main()
{
	
}