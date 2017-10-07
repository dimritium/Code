#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

ll calc(ll p, ll po){
    ll res = 1;
    while(po>0){
        if(po%2 == 1)
            res = ((res%MOD) * (p%MOD))%MOD;
        p = ((p%MOD)*(p%MOD))%MOD;
        po = po/2;
    }
    return res%MOD;
}

ll factors(ll n){
    ll res = 0;
    ll val = (long long)(sqrt(n));
    if(val*val == n)
        res = -1;
    for(ll i = 1; i<=val; i++){
        if(n%i == 0)
            res = (res+2)%MOD;
    }
    return res;
}

ll findPro(ll n){
    ll res = 1;
    for(ll i = 1; i<= sqrt(n); i++){
        if(n%i == 0){
            if(i!=n/i)
                res = ((res%MOD) * (i%MOD) * (n/i)%MOD)%MOD;
            else
                res = ((res%MOD) * (i%MOD))%MOD;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio (false);
    static bool arr[16000000];
    vector<ll>v;
    for(ll i = 2; i<=sqrt(16000000); i++)
        for(ll j = i*i; j<=16000000; j+=i){
            arr[j] = true;
        }
    for(ll i = 2; i<16000000; i++){
        if(!arr[i])
            v.pb(i);
    }
    ll x, n = 1, power, p = 1;
    cin>>x;
    for(ll i = 0; i<x; i++){
        cin>>power;
        n = ((n%MOD)*calc(v[i],power))%MOD;
    }
    cout<<n<<endl;
    p = findPro(n);
    cout<<"f "<<factors(16)<<endl;
    cout<<"p "<<p<<endl;
    cout<<factors(p)<<endl;
}