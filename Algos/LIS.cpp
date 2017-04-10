#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void printSol(int arr[], int lis[]);

int lis(int arr[], int n)
{
	int *lis, i, j, max = 0;
	lis = (int *)malloc(sizeof(int) * n);
	fl(i, 0, n)
	lis[i] = 1;
	for(i = 1; i<n; i++)
		for(j = 0; j < i; j++)
		{
			if(arr[i] > arr[j] && lis[i] < lis[j]+1)
				lis[i] = lis[j] + 1;
		}
	fl(i, 0, n)
	{
		if(lis[i]>max)
			max=lis[i];
	}
	printSol(arr, lis);
	free(lis);
	return max;

}

void printSol(int arr[], int lis[])
{
	int cnt = 0;
	for(int i=0; i<10 ; i++)
	{
		if(lis[i]>cnt && lis[i+1] != lis[i])
		{
			cout<<arr[i]<<" ";
			cnt++;
		}
	}
}

int main()
{
	int arr[] = {10, 22, 9, 33, 21,33, 41, 50, 60, 80};
	int max = lis(arr, 10);
	
	cout<<"\n"<<max;
}