#include<iostream>
using namespace std;

class fact
{
	
	int f;
	public:
		 fact(int x)
		 {
		 	f=x;
		 }
		
		
			
		
		int compute(int f);
		
};
int fact::compute(int m)
{
	int i;
	if(m>1)
	{
		for(i=1;i<=m;i++)
		f=f*i;
	}
	return f;
}
int main()
{
	fact y(1);
	int res,n;
	cout<<"Enter no:\n";
	cin>>n;
	res=y.compute(n);
	cout<<"Factorial is "<<res;
	return 0;
}
