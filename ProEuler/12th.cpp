#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
int calc(int );
long long int count1=0;
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        count1=0;
        long long int n,sum,i,N;
        cin>>N;
        n=N;
        sum=(n*(n+1))/2;
        while(sum)
        {
            for(i=1;i<=sqrt(sum);i++)
            {
                if(sum%i==0)
                count1+=2;
                if(i*i==sum)
                    count1=count1-1;
            }
                if((count1)>N)
                {
                    cout<<sum<<"\n";
                    cout<<count1;
                    break;
                }
                else
                {
                  n=n+1;
                  sum=(n*(n+1))/2;
                  count1=0;
                }
        }
    }
    return 0;
}
