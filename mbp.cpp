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
	ll n, m, i, nod, k, a, b, x, flag = 0, res = 1000000000;
	cin>>n>>m;
	vector<ll>v[n+5];
	vector<ll>conc;
	fl(i, 0, m)
	{
		cin>>a>>b;
		v[a].pb(b);
	}
	fl(i, 1, n+1)
	{
		if(!visited[i])
		{
			nod = dfs(v, i);
			conc.pb(nod);
		}
	 	cnt = 0;
	 	res = min(res, nod);
	 	fl(k, 0, 100005)
	 	visited[k]=0;
	}
	cout<<res;
}