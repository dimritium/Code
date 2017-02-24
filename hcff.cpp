#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int n,m;
    cout<<"Enter two nos\n";
    cin>>n>>m;
    while(n!=m){
    if(n>m)
    n=n-m;
    else
        m=m-n;
    }
    cout<<n;
    return 0;
}
