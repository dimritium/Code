#include<iostream>
using namespace std;
int main()
{
	long long int n,can=0,x;
	
	cin>>n;
	int a[n];
	int b[n];
	for(x=0;x<n;x++)
	{
		
		cin>>a[x];
	}
	for(x=0;x<n-1;x++)
	{
		if(a[x]<a[x+1])
		{
			b[x]=1;
			b[x+1]=b[x]+1;
		}
		else if(a[x]>a[x+1])
		{
			b[x]=2;
			b[x+1]=1;
		}
		else
		{
			b[x]=b[x];
			b[x+1]=1;
		}
	}
	for(x=0;x<n;x++)
	{
		can=can+b[x];
	}
	cout<<can;
	return 0;
}
