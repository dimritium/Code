#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

void bfs(int i)
{
	queue<int>q;
	q.push(i);
	while(!queue.empty())
	{
		curr=q.front();
		q.pop();
		for(int i=0;i<v[curr].size();i++)
		{
			if(vis[v[curr][i]]==false)
			{
				level[v[curr][i]]=level[curr]+1;
				q.push(v[curr][i]);
				vis[v[curr][i]]=true;
			}
		}
		
	}
}
int main()
{
	
}