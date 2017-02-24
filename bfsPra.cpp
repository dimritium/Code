#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007
#define ll long long int

using namespace std;
int x=1,count1=1;
int bfs(int i,int visited[],vector<int>v[],int level)
{
	int k;
	queue<int>q;
	q.push(i);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		visited[curr]=1;
		for(k=0;k<v[curr].size();k++)
		{
			if(visited[v[curr][k]]==0)
			{
				x++;
				if(x==level)
				{
					count1+=1;
				}
				if(x>level)
				{
					break;
				}
				bfs(v[curr][k],visited,v,level);
			}
		}
		if(x>level)
			break;
	}
	return count1;
}
int main()
{
	int n,a,b,i,x;
	cin>>n;
	vector<int>v[n+1];
	int visited[n+1]={0};
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cin>>x;
	// for(i=1;i<=n;i++)
	// {
	// 	if(visited[i]==0)
	// 	{
	// 		bfs(i,visited,v,x);
	// 	}
	// }
	int res=bfs(1,visited,v,x);
	cout<<res;
}