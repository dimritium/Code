#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

ll d,x,y;

ll exp(ll a,ll b, ll m){
    ll res = 1;
    while(b){
        if(b%2)
            res = (res*a)%m;
        a = ((a%m)*(a%m))%m;
        b = b/2;
    }
    return res;
}

void extEuc(ll a, ll b){
    // extern ll d,x,y;
    if(b==0){
        d = a;
        x = 1;
        y = 0;
    }
    else{
        extEuc(b,a%b);
        ll temp = x;
        x = y;
        y = temp - (a/b)*y;
    }
}

ll modInv(ll a, ll b){
    extEuc(a,b);
    return (x%b + b)%b;
}

int main()
{
    ll a, b, c, m;
    cin>>a>>b>>c>>m;
    cout<<((exp(a,b,m)%m)*(modInv(c,m)%m))%m;
}