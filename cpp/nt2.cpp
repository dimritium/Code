#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MAX_INF 2^30
#define MIN_INF -2^30
#define MOD 1000000007
using namespace std;

void soe(bool arr[], ll n){
    arr[1] = true;
    arr[0] = true;
    for(ll i = 2; i<= sqrt(n); i++)
        for(ll j = i*i; j<n; j+=i)
            arr[j] = true;
}

ll findNext(ll n, bool arr[]){
    ll res = 0;
    bool f = false;
    for(ll i = n+1; ; i++){
        for(ll j = 2; j<= sqrt(i); j++){
            if(!arr[j] && i%arr[j]==0){
                
            }
        }
    }
}
int main()
{
    ll n = 1000000;
    bool arr[n] = {false};
    soe(arr, n);
    ll t;
    cin>>t;
    if(!arr[t])
        cout<<0;
    else{
        ll f = MAX_INF, b = MIN_INF;
        for(ll i = t; i <= 9126; i++){
            if(!arr[i]){
                f = i;
                break;
            }
        }
        for(ll i = t;i > 0; i--){
            if(!arr[i]){
                b = i;
                break;
            }
        }
        cout<<min(f-t,t-b);
    }
}