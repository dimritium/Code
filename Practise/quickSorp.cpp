#include<bits/stdc++.h>
using namespace std;
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define ll long long int
#define MOD 1000000007

int partition(int arr[],int l,int h)
{
	int pivot=arr[h];
	int i=(l-1);
	for(int j=l;j<=h-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}

	}
	swap(arr[i+1],arr[h]);
	return i+1;
}

void quick_sort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=partition(arr,l,h);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,h);
	}
}

int main()
{
	
}