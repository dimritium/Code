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
    ll nos = 1500000, i,j;
    ll till = (ll)(sqrt(nos));
    bool arr[nos+5] = {false};
    for(i = 2; i<=till; i++)
        for(j = i*i; j<nos; j+=i)
            arr[j] = true;
    vector<ll>primes;
    for(i = 2; i<nos; i++){
        if(!arr[i])
            primes.push_back(i);
    }
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
        cout<<primes[i]<<" ";
}