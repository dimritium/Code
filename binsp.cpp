#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

int bins(int *,int,int,int);

int bins(int arr[],int start,int end,int ele)
{
	int mid=(start+end)/2;
	if(start>end)
	{
		cout<<"Element not found";
		return -1;
	}
	if(arr[mid]==ele)
		return mid;
	else if(arr[mid]>ele)
	{
		end=mid-1;
	}
	else
		start=mid+1;
	return bins(arr,start,end,ele);

}

int main()
{
	int arr[4]={5,9,11,15};
	cout<<bins(arr,0,3,15);
}