#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
int flag=0;
using namespace std;
int palin(int N);
int palin(int N)
{
	 int rev=0,te=N;
   int temp;
   while(N)
   {
	temp=N%10;
    rev=rev*10+temp;
    N=N/10;
}
//cout<<rev<<"\n";
if(rev==te)
return 1;
else
return 0;
    
} 
int main()
{
	int tc;
    int N,x,y,z;
    cin>>tc;
    while(tc--)
    {
	cin>>N;
    int res=0; 
    for(x=100;x<=999;x++)
     for(y=100;y<=x;y++)
      {
	    z=x*y;
        if(z<N && palin(z))
          res=max(res,z);
       }
     cout<<res<<"\n";
      }   
return 0;
}

