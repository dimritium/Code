#include<bits/stdc++.h>
using namespace std;
void fib(int,int,int);
int main()
{
    int n,m;
    cout<<"Enter the limit of fibonacci series\n";
    cin>>n;
    int i=0,j=1;
    cout<<0<<" "<<1<<" ";
    fib(n,i,j);
}
void fib(int n,int lo,int hi)
{
    if((hi+lo)<=n){
        cout<<(lo+hi)<<" ";
         fib(n,hi,(lo+hi));
    }
    else
        return;
}
