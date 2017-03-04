#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int tc,i,x;
	cin>>tc;
	for(i=0;i<tc;i++)
	{
		cout<<"\n";
		int n,a,b;
		long long int max=0,ind=0,d;
		cin>>n;
		cout<<"\n";
		for(x=0;x<n;x++)
		{
			cin>>a>>b;
			cout<<"\n";
			d=(a*a + b*b);
			if(d>max)
			{
				max=d;
				ind=x+1;
			}
		}
		cout<<"Case "<<i+1<<": "<<ind<<"\n";
	}
	return 0;
}