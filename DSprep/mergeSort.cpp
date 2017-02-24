#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007
int cnt=0;
void merge(int A[],int ,int);
void merge_sort(int A[],int ,int);

void merge(int A[],int start,int mid,int end)
{
	int Arr[end-start+1];
	int p=start,q=mid+1,k=0;
	for(int i=start;i<=end;i++)
	{	
		if(p>mid)
			Arr[k++]=A[q++];
		else if(q>end)
			Arr[k++]=A[p++];
		else if(A[p]<A[q])
			Arr[k++]=A[p++];
		else
			Arr[k++]=A[q++];

	}
	for(int l=0;l<k;l++)
		A[start++]=Arr[l];
}

void merge_sort(int A[],int start,int end)
{
	if(end>start)
	{
		int mid=(start+end)/2;
		merge_sort(A,start,mid);
		merge_sort(A,mid+1,end);
		merge(A,start,mid,end);
	}
}

int main()
{
	int a[2]={1,2};
	merge_sort(a,0,1);
	for(int i=0;i<2;i++)
		cout<<a[i]<<" ";
}