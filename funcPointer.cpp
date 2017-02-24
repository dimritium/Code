#include<iostream>
using namespace std;
void maxmin(int a[],int i,int j,int *ma,int *mi)
{
	int max1=0,min1=0,mid;
	if(i==j)
	{
		*ma=a[i];
		*mi=a[i];
	}
	else if(i==j-1)
	{
		if(a[j]>a[i])
		{
			*ma=a[j];
			*mi=a[i];
		}
		else
		{
			*ma=a[i];
			*mi=a[j];
		}
	}
	else
	{
		mid=(i+j)/2;
		maxmin(a,i,mid,ma,mi);
		maxmin(a,mid+1,j,&max1,&min1);
		if(*ma<max1)
			*ma=max1;
		if(*mi>min1)
			*mi=min1;
	}
}
int main()
{
	int a[10],i,max,min,n;
	cout<<"Enter no of elements\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(i=0;i<n;i++)
	    cin>>a[i];
	 i=0;
	 max=a[0];
	 min=a[0];
	 maxmin(a,0,n-1,&max,&min);
	cout<<"Max "<<max<<" Min "<<min;

return 0;
}