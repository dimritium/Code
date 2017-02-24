#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

void quick_sort(int a[],int,int);
int partition(int a[],int,int);
void swap(int *,int,int);

void quick_sort(int a[],int low,int high)
{
	int pivot;
	if(high>low)
	{
		pivot=partition(a,low,high);
		quick_sort(a,low,pivot-1);
		quick_sort(a,pivot+1,high);
	}
}

int partition(int a[],int low,int high)
{
	int left,right,pivot_item=a[low];
	left=low;
	right=high;
	while(left<right)
	{
		while(a[left]<=pivot_item)
			left++;
		while(a[right]>pivot_item)
			right--;
		if(left<right)
			 swap(a,left,right);
	}
	a[low]=a[right];
	a[right]=pivot_item;
	return right;
}

void swap(int a[],int left,int right)
{
	int temp=a[left];
	a[left]=a[right];
	a[right]=temp;
}

int main()
{
	int a[8]={5,4,3,2,0,8,1,78};
	quick_sort(a,0,7);
	for(int i=0;i<8;i++)
	cout<<a[i]<<" ";	
}