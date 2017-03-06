//heap(--> basically a tree with some rule) sort
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void max_heapify(int Arr[],int,int);
void buid_maxheap(int Arr[],int);

void max_heapify(int Arr[],int i,int N)
{
	int largest;
	int left=2*i;
	int right=2*i+1;
	if(left<=N and Arr[left]>Arr[i])
		largest=left;
	else
		largest=i;
	if(right<=N and Arr[right]>Arr[largest])
		largest=right;
	if(largest!=i)
	{
		swap(Arr[i],Arr[largest]);
		max_heapify(Arr,largest,N);
	}
}

void buid_maxheap(int Arr[],int N)
{
	for(int i=N/2;i>=1;i--)
	{
		max_heapify(Arr,i,N);
	}
}

void heap_sort(int Arr[],int N)
{
	int heap_size=N;
	buid_maxheap(Arr,N);
	for(int i=N;i>=2;i--)
	{
		swap(Arr[1],Arr[i]);
		heap_size=heap_size-1;
		max_heapify(Arr,1,heap_size);
	}
}

int main()
{
	int arr[]={0,89,88,87,86,85,84,83};
	heap_sort(arr,7);
	for(int i=1;i<=7;i++)
	{
		cout<<arr[i]<<" ";
	}
}