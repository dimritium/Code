#include<bits/stdc++.h>
#define fl(i,b,c) for(i=b;i<c;i++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

int main()
{
	set<long long int>s;
	long long int n,i,j,de,nde,count,k;	
	cin>>n;
	long long int a[n];
	fl(i,0,n)
	{
	cin>>a[i];
	s.insert(a[i]);
	}
	de=s.size();
	count=0;
	if(n==de)
		cout<<1;
	else
	{
	for(i=0;i<n;i++)
	{
		s.erase(s.begin(),s.end());
		for(j=i;j<n;j++)
		{
			s.insert(a[j]);
			nde=s.size();
			if(de==nde)
				count++;
		}
	}
	cout<<count;
  }
}