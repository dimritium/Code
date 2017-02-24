#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

// void insertion_sort(int a[], int n)
// {
// 	for(int i=0;i<n;i++){
// 		int temp=a[i];
// 		int j=i;
// 		while(j>0 && temp<a[j-1]){
// 			a[j] = a[j-1];
// 			j = j-1;
// 		}
// 		a[j] = temp;
// 	}
// }

void insertion_sort(int a[], int n)
{
	int cmp=0;
	for(int i=0;i<n;i++)
	{
	
		int temp=a[i];
		int j=i;
		cmp++;
		while(j>0 && temp<a[j-1]){
			a[j]=a[j-1];
			j=j-1;
			cmp++;
		}
		a[j]=temp;
	}
	cout<<cmp<<"\n";
}

int main()
{
	int a[]={0, 15, 5, 1, 0, 20, 25, 30, 35, 40};
	insertion_sort(a,10);
	for(int i=0;i<10;i++)
		cout<<a[i];
}