#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio (false);
    ll n, x, i;
    cin>>n;
    multiset<ll>sets;
    multiset<ll>::iterator it;
    int arr[n+5];
    fl(i,0,n){
        cin>>x;
        arr[i] = x;
        sets.insert(x);
    }
    it = sets.begin();
    ll srch = *it;
    ll nxt = *(++it);
    if(srch == nxt)
        cout<<"Still Rozdil";
    else{
        fl(i,0,n){
            if(arr[i] == srch){
                cout<<i+1;
                break;
            }
        }
}
}