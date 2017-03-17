#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        ll i, n;
        cin>>n;
        ll a[n], b[n], sum1 = 0, sum2 = 0;
        fl(i, 0, n)
        cin>>a[i];
        fl(i, 0, n)
        cin>>b[i];
        fl(i, 0, n)
        {
            if(i%2==0)
            sum1+=a[i];
            else
            sum1+=b[i];
        }
        fl(i, 0, n)
        {
            if(i%2==0)
            sum2+=b[i];
            else
            sum2+=a[i];
        }
        cout<<min(sum1,sum2)<<endl;
    }
}