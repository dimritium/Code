#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    int tc;
    ll n,k,x;
    cin>>tc;
    while(tc--){
        multiset<ll>set;
        cin>>n>>k;
        for(ll i = 0; i<n; i++){
            cin>>x;
            set.insert(x);
        }
        ll candies = 0;
        while(k--){
            multiset<ll>::reverse_iterator it;
            it = set.rbegin();
            ll can = *it;
            candies+=can;
            set.erase(*it);
            set.insert(can/2);
        }
        cout<<candies<<endl;
    }
}