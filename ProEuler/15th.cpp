#include<bits/stdc++.h>
using namespace std;
long long int fact(int);
int main()
{
    int tc,n,m;
    cin>>tc;
    while(tc--)
    {
        cin>>m>>n;
        long long int res;
        res=(fact(m-1+n-1))/(fact(m-1)*fact(n-1));
        cout<<res<<"\n";
    }
    return 0;
}

long long int fact(int re)
{
    if(re<2)
        return 1;
    else
        return re*fact(re-1);
}
