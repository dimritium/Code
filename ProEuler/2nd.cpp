#include<iostream>
using namespace std;
#include<vector>
using namespace std;
int main()
{
	long long int tc;
	cin>>tc;
	while(tc--)
	{
		long long int a=1,b=2,s=0,N,t;
		cin>>N;
		while(b<=N)
		 {
		 	if(b%2==0)
		 	{
			  s+=b;
		    }
		    t=a;
		 	 a=b;
		 	 b=t+b;
		 }
		 cout<<s<<"\n";
	}
 return 0;
}
