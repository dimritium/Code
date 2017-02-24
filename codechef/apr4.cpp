#include<bits/stdc++.h>
using namespace std;
#define MOD 10000000007
int main()
{
    int tc;
    long long int n,k,res,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        res=k;
        for(i=1;i<n;i++)
        {
            res*=(k-1);
        }
        cout<<res%MOD<<endl;
    }
  return 0;
}
