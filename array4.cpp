#include<iostream>
using namespace std;
int main()
{
	int i,e,le;
	cout<<"Enter no of elements:\n";
	cin>>e;
	int arr[e];
	for(i=0;i<e;i++)
	cin>>arr[i];
	cout<<"Enter the element to be inserted at last:\n";
	cin>>le;
	arr[e]=le;
	cout<<"Elements after insertion:\n";
	for(i=0;i<e+1;i++)
	cout<<arr[i]<<"\n";
	return 0;
}
