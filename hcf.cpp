#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int n,m;
    cout<<"Enter two nos\n";
    cin>>n>>m;
    cout<<"HCF "<<hcf(n,m)<<endl;
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
        return a;
    else
        hcf(b,a%b);
}

