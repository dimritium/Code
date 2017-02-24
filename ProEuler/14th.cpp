#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<cmath>
int main()
{
    int tc;
    long long int i,j,c=0,n,lc=0;
    for(i=1;i<=5000000;i++)
    {

        c=1;
        n=i;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                c++;
            }
            else
            {
                n=(3*n)+1;
                c++;
            }
        }

        if(c>=lc)
        {
        lc=c;
        cout<<i<<"\n";
        }
    }
}
