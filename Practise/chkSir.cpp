#include<iostream>
using namespace std;
#define fl(a,b) for(i=a;i<b;i++)
int main()
{
	int a,b,i,e;
	cout<<"Enter no of elements ";
	cin>>e;
	int arr[e];
	fl(0,e)
	cin>>arr[i];
	cout<<"Entered no: \n";
	fl(0,e)
	cout<<arr[i]<<"\n";
	return 0;
}
