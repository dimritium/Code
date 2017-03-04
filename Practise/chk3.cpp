#include<iostream>
using namespace std;
const int const1=5;
void display(int const1)
{
	const int const2=5;
	int arr1[const1];
	int arr2[const2];
	for(int i=0;i<5;i++)
	{
		arr1[i]=i;
		arr2[i]=i*10;
		cout<<arr1[i]<<" "<<arr2[i];
		
	}
}
	int main()
	{
		int a=6;
	a=7;
		cout<<a;
		display(7);
	}
	

