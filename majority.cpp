#include<bits/stdc++.h>
using namespace std;
int main()
{
	int maj=0,count=1,i,n;
	cin>>n;
	int a[n];
	cout<<"Input array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	maj=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]==maj)
			count+=1;
		else
			count-=1;
		if(count==0){
			maj=a[i];
			count=1;
		}
	}
	if(count==0)
	{
		cout<<a[count];
		cout<<"No maj elem";
	}
	else
	{
	cout<<maj<<" "<<count;
	//cout<<"Proposed Majority elem is "<<maj;
	count=0;
	for(i=0;i<n;i++)
	{
		if(maj==a[i])
			count++;

	}
	if(count>n/2)
			cout<<"Majority elem is "<<maj<<"\n";
			else
			cout<<"Not a maj elem"<<"\n";	
   }
}
