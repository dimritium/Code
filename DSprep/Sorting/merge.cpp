#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void merge(int a[],int start, int mid, int end)
{
	int arr[end-start+1],k=0,p=start,q=mid+1;
	for(int i = start; i<=end; i++)
	{
		if(p>mid)
			arr[k++]=a[q++];
		else if(q>end)
			arr[k++]=a[p++];
		else if(a[p]<a[q])
			arr[k++]=a[p++];
		else 
			arr[k++]=a[q++];
	}
	for(int p=0;p<k;p++)
		a[start++]=arr[p];
}
void merge_sort(int a[], int start, int end)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		merge_sort(a,start,mid);
		merge_sort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}
int main()
{
	int a[]={0, 15, 5, 1, 0, 20, 25, 30, 35, 40};
	merge_sort(a,0,10);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
}