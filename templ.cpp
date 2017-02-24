#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

// template<class var>
// void swap(var &v1, var &v2){
// 	var temp = v1;
// 	v1 = v2;
// 	v2 = temp;
// }
void select_sort(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int min = i;
		for(int j = i; j < n; j++)
		{
			if(a[j] < a[min] )
			{
				min = j;
			}
		}
		swap(a[i],a[min]);
	}
}

int main()
{
	int a[] = {3,1,2,4,6};
	select_sort(a,5);
	for(int i = 0; i < 5; i++)
		cout<<a[i]<<" ";
	// float f1=4.5,f2 = 6.0;
	// swap(f1,f2);
	// cout<<f1<<" "<<f2;
	// printf("%c",char(printf("Hello\n")));
}