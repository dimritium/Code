#include<iostream>
using namespace std;
long long int lcm(long long int,long long int);
int main()
{

    long long int sum=1;
    int tc,n;
    cin>>tc;
    while(tc--)
    {
      cin>>n;
      for(int i=1;i<=n;i++)
      {
        sum=lcm(sum,i);
      }
      cout<<sum<<"\n";
      sum=1;
    }
    return 0;
}
long long int lcm(long long int x,long long int y)
{
    long long int a=x,b=y;
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;

	}
	return (x*y)/a;
}
