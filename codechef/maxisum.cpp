#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

ll init(ll a[], ll b[], ll n)
{
    ll res = 0;
    for(ll i = 0; i<n; i++)
    res+=a[i]*b[i];
    return res;
}

int main()
{
    ll tc, n, x, y, k, i;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        ll a[n], b[n], res, init_n, res1, res2;
        fl(i, 0, n)
        cin>>a[i];
        fl(i, 0, n)
        cin>>b[i];
        init_n = init(a,b,n);
        res = init_n;
        fl(i, 0, n){
            res = max(res, init_n+k*b[i]);
            res = max(res, init_n-k*b[i]);
        }
        cout<<res<<endl;
    }
}