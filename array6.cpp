#include<iostream>
using namespace std;
int main()
{
	int i,e,ip,ie;
	cout<<"Enter no of elements\n";
	cin>>e;
	int arr[e];
	for(i=0;i<e;i++)
	cin>>arr[i];
	cout<<"Enter the index-position where to insert the new element\n";
	cin>>ip;
	cout<<"Enter elem. to be inserted:\n";
	cin>>ie;
	for(i=e;i>=ip;i--)
	arr[i+1]=arr[i];
	arr[ip]=ie;
	for(i=0;i<e+1;i++)
	cout<<arr[i]<<"\n";
	return 0;
	
}
