//quick sort
#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007


void qsort(int A[],int ,int);
int partition(int A[],int,int);
void swap(int A[],int,int);
int pivot;

void qsort(int A[],int low,int high)
{
	if(high>low)
	{
		pivot=partition(A,low,high);
		qsort(A,low,pivot);

	}
}


int main()
{
	
}