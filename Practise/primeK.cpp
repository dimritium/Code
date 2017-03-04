#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[1000000]={0},j,i;
	a[1]=1;
	for(i=2;i<sqrt(1000000);i++)
		for(j=i*i;j<1000000;j+=i)
		{
			a[j]=1;
		}
		vector<long long int>v;
		v.push_back(2);
		for(i=3;i<1000000;i+=2)
		if(a[i]==0)
		{
			v.push_back(i);
		}
		// free(a[1000000]);
	long long int tc;
	cin>>tc;
	while(tc--)
	{
		long long int n;
		cin>>n;
		for(i=0;n>1;i++)
		{
			while(n%v[i]==0)
			{
				n=n/i;
				cout<<v[i]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}