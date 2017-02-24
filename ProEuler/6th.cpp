#include<iostream>
using namespace std;
int main()
{
    int n,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
    long long int sum1=0,sum2=0;
    for(int i=1;i<=n;i++)
    {
        sum1+=i;
        sum2+=i*i;
    }
    cout<<sum1*sum1-sum2;
    }
    return 0;

}
