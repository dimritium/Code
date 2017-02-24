#include<iostream>
using namespace std;
#define fl(a,b) for(i=a;i<b;i++)
int main()
{
	int i,a,b,e,fe;

	cout<<"Enter no of elements";
	cin>>e;
	int arr[e];

	fl(0,e)
	cin>>arr[i];

	cout<<"Enter the element you want to enter at first place: ";
	cin>>fe;
	
	for(i=e;i>=0;i--)
		arr[i+1]=arr[i];
		
	arr[0]=fe;
	fl(0,e+1)
	cout<<arr[i]<<"\n";
	return 0;
}
