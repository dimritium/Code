//merge sort
#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

void merge(int A[],int start,int mid,int end)
{
	int p=start,q=mid+1;
	int Arr[end-start+1],k=0;
	for(int i=start;i<=end;i++)
	{
		if(p>mid)
			Arr[k++]=A[q++];
		else if(q>end)
			Arr[k++]=A[p++];
		else if(A[p]<A[q])
			Arr[k++]=A[p++];
		else if(A[q]<A[p])
			Arr[k++]=A[q++];
	}
	for(int p=0;p<k;p++)
		A[start++]=Arr[p];
}

void merge_sort(int A[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		merge_sort(A,start,mid);
		merge_sort(A,mid+1,end);
		merge(A,start,mid,end);
	}
}

int main()
{
	
}
