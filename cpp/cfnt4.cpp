#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll n, x, count = 0;
    cin>>n>>x;
    for(ll i = 1; i<=n; i++){
        if(x%i==0 && x/i<=n)
            count+=1;
    }
    cout<<count;
}