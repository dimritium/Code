#include<iostream>
using namespace std;
int main()
{
    int n,tc;

    long long int a[1000000000]={0};
    a[1]=1;
    for(int i=2;i<=100;i++)
    {
        for(int j=i*i;j<=100;j+=i)
        {
            a[j]=1;
        }
    }
    cout<<"Enter no of time you want to check prime\n";
    cin>>tc;
    while(tc--)
    {
    cin>>n;
    if(a[n]==0)
        cout<<"It is prime\n";
    else
        cout<<"Not a prime\n";
    }
}
