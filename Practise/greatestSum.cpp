#include<iostream>
using namespace std;

class greatestSum
{
	
	public:
	long long int c=0,z;

		int calculate(long long int x,long long int y)
		{
			
			if(x==0)
			{
			return y;
		    }
			else
			{
				for(int i=1;i<=y;i++)
				{
				c=c+sgreatestSum(x-1,i);
				
			    }
				return c;
			}
	    }
			int sgreatestSum(long long int k,long long int m)
			{
				
				if(k==0)
				{
					return m;
				}
				else
				{
					for(int i=1;i<=m;i++)
				calculate(k-1,i);
			   }
			}
		
};

int main()
{
	
	long long int k,x,total;
	greatestSum x1;
	cout<<"Enter k and x";
	cin>>k>>x;
	total=x1.calculate(k,x);
	cout<<"Result "<<total;
	return 0;
}
