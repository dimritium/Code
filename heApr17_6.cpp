#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

ll arr[10000000];

ll factors_sum(ll n)
{
    
}
int main()
{
    memset(arr, -1, 10000000);
    arr[1] = n;
    ll n, i, res_sum = 0;
    cin>>n;
    res_sum = n%MOD;
    for(i = n; i>=2; i--)
    {
        ll fac_sum = factors_sum(i);
        fac_sum = (fac_sum%MOD + (((n-i)/i)*fac_sum)%MOD)%MOD;
        fac_sum = (fac_sum%MOD + ((n-i) - (n-i)/i)%MOD)%MOD;
        res_sum = ((res_sum%MOD)+(fac_sum%MOD))%MOD;
    }
    cout<<res_sum%MOD;
}