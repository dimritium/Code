#include<iostream>
#include<cmath>
using namespace std;
long long int prime(long long int N);
long long int prime(long long int N)
{
	long long int i,Max;
 i=2;
while(N%i==0)
  {
	N=N/i;
    Max=i;
}

for(i=3;i<=sqrt(N);i+=2)
{
	while(N%i==0)
     {
	N=N/i;
    Max=i;
    }
}
if(N>2)
{
	Max=N;
}
return Max;
}
int main()
{
 int tc;
 long long int N;
 cin>>tc;
 while(tc--)
 {
	cin>>N;
    cout<<prime(N)<<"\n";
}
return 0;	
}
