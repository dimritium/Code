#include<iostream>
using namespace std;
int getp(int);
int flag=0;
int main()
{
	int i,k;
	cout<<"Enter the no\n";
	cin>>i;
	int sp=i+1;
	k=getp(sp);
	cout<<k;
	return 0;
}
int getp(int j)
{
	for(int z=2;z<=j/2;z++)
	{
		if(j%z==0)
		{
		flag=1;
	    break;
		}
	}
	if(flag==0)
	return j;
	else
	{
	flag=0;
	getp(j+1);
}
}
