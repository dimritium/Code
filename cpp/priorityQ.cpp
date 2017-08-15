#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back
#define ll long long
using namespace std;

int main()
{
	ll t, x;
	priority_queue<ll>q;
	std::vector<ll> v;
	cin>>t;
	while(t--)
	{
		cin>>x;
		q.push(x);
		if(q.size()<3)
			cout<<"-1"<<endl;
		else
		{
			int tc = 3;
			while(tc--)
			{
			cout<<q.top()<<" ";
			v.push_back(q.top());
			q.pop();
			}
			cout<<endl;
			tc = 3;
			while(tc--)
			{
				q.push(v.back());
				v.pop_back();
			}
		}
	}
}