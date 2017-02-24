#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void select_sort(int a[], int n)
{
	int min,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[min],a[i]);
	}
}
int main()
{
	int a[]={2,1,3,4,6};
	select_sort(a,5);
	for(int i=0;i<5;i++)
		cout<<a[i];
}