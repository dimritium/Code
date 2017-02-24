#include<iostream>
using namespace std;
int main()
{
	long long int sum1,sum2,sum3,N,l,n;
int tc;
cin>>tc;
while(tc--)
{
	cin>>N;
l=3*((N-1)/3);
n=(N-1)/3;
sum1=(n*(3+l))/2;
l=5*((N-1)/5);
n=(N-1)/5;
sum2=(n*(5+l))/2;
sum3=sum1+sum2-(15*((N-1)/15));
cout<<sum3<<"\n";
}
return 0;
}
