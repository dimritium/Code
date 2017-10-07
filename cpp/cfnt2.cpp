#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

ll min(ll, ll);
ll max(ll, ll);

ll min(ll x, ll y){
    if(x<y)
        return x;
    else
        return y;
}

ll max(ll x, ll y){
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<min(8,n-8)<<" "<<max(8,n-8);
    }
    else{
        cout<<min(9,n-9)<<" "<<max(9,n-9);
    }
}