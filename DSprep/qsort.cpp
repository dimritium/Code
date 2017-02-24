#include<bits/stdc++.h>
using namespace std;
void qsort(int A[],int,int);
int partition(int A[],int,int);
void swap(int A[],int,int);
int pivot;
void qsort(int A[],int low,int high)
{
	//global int pivot;
	if(high>low)
	{
		pivot=partition(A,low,high);
		qsort(A,low,pivot-1);
		qsort(A,pivot+1,high);
	}
}

int partition(int A[],int low,int high)
{
	int left,right,pivot_item=A[low];
	left=low;
	right=high;
	while(left<right)
	{
		while(A[left]<=pivot)
			left++;
		while(A[right]>pivot)
			right--;
		if(left<right)
			swap(A,left,right);
	}
	A[low]=A[right];
	A[right]=pivot_item;
	return right;
}

void swap(int A[],int left,int right)
{
	int temp=A[left];
	A[left]=A[right];
	A[right]=temp;
}

int main()
{
	int n;
	cout<<"Enter no of elements\n";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	qsort(A,0,n);
	for(int i=0;i<n;i++)
		cout<<A[i];
}