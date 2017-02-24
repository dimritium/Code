#include<bits/stdc++.h>
using namespace std;
int isp(int);
int main()
{
	vector<int>v;
	int tc,i,flag,n,x;
	cin>>tc;
	while(tc--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(i=n-1;i>=0;i--)
		{
			isp(v[i])==1?flag=1:flag=0;
			if(flag==1)
				break;
		}
		if(flag==0)
			cout<<-1<<"\n";
		else if(flag==1)
			cout<<v[i]*v[i]<<"\n";
		v.erase(v.begin(),v.end());
	}
}
int isp(int n)
{
	int i;
	if(n==2)
		return 1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}