#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

int main()
{
 int a[10],a2[10],n,i,j;
 cout<<"No of elements\n";
 cin>>n;
 a[n],a2[n];
 fl(i,0,n)
 	cin>>a[i];
fl(i,0,n)
{ 
	int count=0;
	for(j=i;j>=0;j--)
	{
		if(a[j]<=a[i])
			count++;
		else
			break;
	}
	a2[i]=count;
}
fl(i,0,n)
cout<<a2[i]<<" ";
return 0;
}