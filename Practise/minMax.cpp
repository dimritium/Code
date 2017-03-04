#include<iostream>
using namespace std;
struct miax
{
	int min,max;
};
miax MaxMin(int a[],int start,int end)
{
	miax findL,findR,minmax;
	int mid;
	if (start==end)
	{
		minmax.min=a[start];
		minmax.max=a[start];
		return minmax;
	}
	if(start==end-1)
	{
		if(a[start]<a[end])
		{
			minmax.min=a[start];
			minmax.max=a[end];
		}
		else
		{
			minmax.min=a[end];
			minmax.max=a[start];	
		}
		return minmax;
	}
	mid=(start+end)/2;
	findL=MaxMin(a,start,mid);
	findR=MaxMin(a,mid+1,end);

	if(findR.min<findL.min)
		minmax.min=findR.min;
	else
		minmax.min=findL.min;

	if(findR.max<findL.max)
		minmax.max=findL.max;
	else
		minmax.max=findR.max;

	return minmax;

}
int main()
{
	int n;
	cout<<"Enter no of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	miax A=MaxMin(a,0,n-1);
	cout<<"Max "<<A.max<<" Min "<<A.min;
	return 0;
}
