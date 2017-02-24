#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* getting all amicable numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j;
    long long int sum=1,sum1=1;
    for(i=220;i<100000;i++)
    {

        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                sum+=i/j;
            }
        }
        if(sum!=i)
        {
            for(j=2;j<=sqrt(sum);j++)
            {
                if(sum%j==0)
                {
                    sum1+=j;
                    sum1+=sum/j;
                }
            }
            if(i==sum1)
                cout<<i<<endl;
        }sum=1;sum1=1; }}*/

int main() {
   int tc;
    long long int n,i;
    cin>>tc;
    while(tc--)
   {
        cin>>n;
           long long int psu=0;
  int a[26]={220,284,1184,1210,2620,2924,5020,5564,6232,6368,10744,10856,12285,14595,17296,18416,63020,66928,66992,67095,69615,71145,76084,79750,87633,88730};
        for(i=0;a[i]<n;i++)
            psu+=a[i];
        cout<<psu<<endl;

}
    return 0;
}
