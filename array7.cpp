#include<iostream>
using namespace std;
int main()
{
	int i,e,nr,nrp,z;
	cout<<"Enter the no of elem. \n";
	cin>>e;
	int arr[e];
	for(int i=0;i<e;i++)
	cin>>arr[i];
	cout<<"Enter no to replace its position:\n";
	cin>>nr;
	cout<<"Enter no to add to the replaced pos.:\n";
	cin>>nrp;
	for(i=e;;i--)
	{
		if(arr[i]==nr)
		{
        z=i;
		break;
	    }
	arr[i+1]=arr[i];
   }
   arr[z+1]=arr[z];
   arr[z]=nrp;
   for(i=0;i<e+1;i++)
   cout<<arr[i]<<"\n";
   return 0;
}
