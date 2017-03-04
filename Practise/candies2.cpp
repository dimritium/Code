#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#include<iostream>
using namespace std;
int main()
{
	int n,x,can=0;
	cin>>n;
	int a[n];
	int b[n];
	for(x=0;x<n;x++)
	cin>>a[x];
	if(a[0]>a[1])
	 {
	 	b[0]=2;
	 	b[1]=1;
	 }
	 if(a[1]>a[0])
	 {
	 	b[1]=2;
	 	b[0]=1;
	 }
	 if(a[1]==a[0])
	 {
	 	b[1]=b[0]=1;
	 }
	 for(x=1;x<n-1;x++)
	 {
	 	if(a[x]>a[x+1])
	 	{
	 		b[x+1]=1;
            if(b[x]==b[x+1])
                {
                b[x]++;
            }
		}
		else if(a[x+1]>a[x])
		{
			b[x+1]=b[x]+1;
		}
         else
             b[x+1]=1;
	 }
	 for(x=0;x<n;x++)
	 	can+=b[x];
	 cout<<can;
	 return 0;
}
