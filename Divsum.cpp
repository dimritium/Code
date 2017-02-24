#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int tc,n,i;
	cin>>tc;
	while(tc--)
	{
		long long int sum=1;
		cin>>n;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0 && i*i!=n)
				sum+=i+n/i;
			else if(n%i==0 && i*i==n)
				sum+=i;
		}
		cout<<sum<<"\n";
	}
	return 0;
}