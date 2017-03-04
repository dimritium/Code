#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 10000000007

using namespace std;
ll bins(ll a[],ll,ll,ll);
int main()
{
	long long int t,i,q,qi,x;
	cin>>t;
	long long int a[t];
	cin>>a[0];
	for(i=1;i<t;i++)
	{
		cin>>x;
		a[i]=x+a[i-1];
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		long long int start=0,end=t,mid,res;
		cin>>qi;
		if(qi>a[t-1]){
			cout<<-1<<"\n";
		continue;
		}
		else
		{
			cout<<bins(a,start,end-1,qi)<<"\n";
		}
	}
	return 0;
}
ll bins(ll a[],ll start,ll end,ll qi)
{
	long long int mid,res;
	mid=(start+end)/2;
	if(a[mid]==qi)
		return mid+1;
	while(a[mid]!=qi && (end>=start))
	{
		if (a[mid]>qi)
			end=mid-1;
		else
			start=mid+1;
		mid=(start+end)/2;
		res=mid;
		if (a[mid]<a[res])
			break;
	}
		return res+2;
}