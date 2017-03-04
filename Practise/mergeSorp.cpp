#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

void merge(int *,int ,int ,int);
void merge_sort(int *,int,int);
void prin(int arr[],int ,int ,int);

void merge(int arr[],int start,int mid,int end)
{
	int arr_a[end-start+1],p=start,q=mid+1,k=0;
	int pstart=p;
	for(int i=start;i<=end;i++)
	{
	if(q>end)
		arr_a[k++]=arr[p++];
	else if(p>mid)
		arr_a[k++]=arr[q++];
	else if(arr[p]<arr[q])
		arr_a[k++]=arr[p++];
	else
		arr_a[k++]=arr[q++];
	}
	cout<<"Arb_a:\n";
	prin(arr_a,pstart,mid,end);
	for(int i=0;i<k;i++)
		arr[start++]=arr_a[i];
	cout<<"Real:\n";
	prin(arr,pstart,mid,end);
}

void merge_sort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

void prin(int arr[],int pstart,int mid,int end)
{
	int i;
	fl(i,0,5)
	cout<<arr[i]<<" ";
	cout<<"\n"<<"start-->"<<pstart<<" mid--> "<<mid<<" end--> "<<end;
	cout<<"\n";
}
int main()
{
	int arr[5]={10,1,3,3,8},i;
	merge_sort(arr,0,4);
	// fl(i,0,5)
	// cout<<arr[i]<<" ";	
}