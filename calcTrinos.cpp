#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    vector<int>v;
    int i,j,count=0,lcount=0;
    long long int sum;
    for(i=1;count<1000;i++)
    {
        count=0;
        sum=(i*(i+1))/2;
        for(j=1;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            count+=2;
            if(j*j==sum)
                count=count-1;
        }
        if(count>lcount)
        {
        cout<<i<<" "<<count<<"\n";
        lcount=count;
        }

    }
    return 0;
}
