#include<iostream>
using namespace std;
#define fl(a,b) for(i=a;i<b;i++)
int main()
{
	int a,b,i,z;
	cout<<"Enter elements Press 999 to terminate\n";
	int arr[100];
	fl(0,100)
	{
		cin>>arr[i];
		if(arr[i]==999)
		{
			z=i;
		break;
	    }
	}
	cout<<"Entered elements:\n";
	fl(0,z)
	cout<<arr[i]<<"\n";
	cout<<"No of elements: "<<z;
	return 0;
}
