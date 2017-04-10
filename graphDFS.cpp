#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back
#define ll long long int
using namespace std;

ll visited[100005]={0};
ll cnt = 0;
ll dfs(vector<ll> v[], ll x)
{
	if(!visited[x])
		visited[x] = 1;
	for(ll i = 0; i<v[x].size(); i++)
	{
		if(!visited[v[x][i]]){
			cnt++;
			dfs(v, v[x][i]);
		}
	}
	return cnt+1;
}
int main()
{
	ll n, m, i, a, b, x;
	cin>>n>>m;
	vector<ll>v[n+5];
	fl(i, 0, m)
	{
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	cin>>x;
	ll nod = dfs(v, x);
	cout<<(n-nod);
}