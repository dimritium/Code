#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ro,col,coln,n,x,t;
    cin>>t;
    while(t--)
   {
    cin>>n;
    int a[n][n];
    for(ro=0;ro<n;ro++)
            for(col=0;col<=ro;col++)
            cin>>a[ro][col];
    cout<<givRes(a);
    }
    return 0;
}
int givRes(int n)
{

        long long int sum=0;
        for(ro=0;ro<n;ro++)
        {
        for(col=0;col<=ro;col++)
        {
            sum+=a[ro][col];
    }
     cout<<sum<<"\n";
}

