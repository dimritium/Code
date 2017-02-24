#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;
void swap(int *,int *);
void prime(int);
int main()
{
	int a[50],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<10;i++)
		a[i]=a[i-2]+a[i-1];
	// for(i=0;i<10;i++)
	// 	cout<<a[i]<<"\n";
	prime(100);
	return 0;
}
void prime(int n)
{
	int b[n]={0},j,i,count=0;
	for(i=2;i<n;i++)
	{
		int flag=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if (i%j==0)
			{
			 flag=1;
			 break;
			}
		}
		if(flag==0)
			b[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			count++;
			cout<<i<<"\n";
		}
	}
	cout<<"Total "<<count;
}