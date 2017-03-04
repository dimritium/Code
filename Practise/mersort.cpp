#include<bits/stdc++.h>
using namespace std;
void merge(int A[],int start,int mid,int end);
void mergesort(int A[],int start,int end);
void merge(int A[],int start,int mid, int end)
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
		else
			Arr[k++]=A[q++];
	}
	for(int p=0;p<k;p++)
		A[start++]=Arr[p];

}
void mergesort(int A[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		mergesort(A,start,mid);
		mergesort(A,mid+1,end);
		merge(A,start,mid,end);
	}
}
int main()
{
	int 
}