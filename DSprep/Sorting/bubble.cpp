#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

void bubble_sort(int a[], int n);
void b_sort(int a[], int n);
int main()
{
	int a[]={2,1,3,4,6};
	// bubble_sort(a,5);
	b_sort(a,5);
	for(int i=0;i<5;i++)
		cout<<a[i]<<"\n";
}

void b_sort(int a[], int n)
{
	int temp,i,j,cmp=0;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			cmp++;
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		cout<<cmp<<"\n";
}

void bubble_sort(int a[], int n){
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
}