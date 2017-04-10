#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

ll _dis[100000]={0};
ll visited[100000]={0};
void bfs(std::vector<ll> v[], int i, ll level[])
{
	cout<<"Magic"<<endl;
	queue<ll>q;
	ll j;
	q.push(i);
	while(!q.empty())
	{
			i = q.front();
			q.pop();
			if(!visited[i])
			{
				visited[i] = 1;
				for(j = 0; j<v[i].size(); j++)
				{
					q.push(v[i][j]);
					level[v[i][j]] = level[i]+1;
				}
			}
	}
}
int main()
{
	ll tc, q, id = 100000, ini_d=1000000, a, b, gq, dis, dis_min;
	ll level[10000] = {0};
	cin>>tc;
	ll edges = tc-1;
	std::vector<ll> v[tc+5];
	while(edges--)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(v, 1, level);
	for(int i = 1; i<= tc; i++)
		cout<<level[i]<<endl;
	cin>>q;
	while(q--)
	{
		cin>>gq;
		dis = level[gq];
		cout<<"dis "<<dis<<endl;
		if(dis<ini_d)
		{
			ini_d = dis;
			id = gq;
			cout<<"IDgq "<<id<<endl;
		}
		else if(dis == ini_d)
		{
			if(gq<id){
				id = gq;
				cout<<"ID "<<id<<endl;
			}
		}
	}
	cout<<id;

}