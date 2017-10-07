#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

ll find(ll arr[], ll n){
    ll cnt = 0;
    ll i;
    fl(i,0,n){
        if(arr[i]==0){
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    ll n,i,res = 0,p=0;
    cin>>n;
    ll arr[n];
    fl(i,0,n)
        cin>>arr[i];
    fl(i,1,n)
        arr[i] += arr[i-1];
    if(arr[n-1] == 0)
    {
        ll x = find(arr,n);
        if(x%2==0)
            cout<<((x-2)/2)*(x-1);
        else
            cout<<((x-1)/2)*(x-2);
    }
    else
    {
        fl(i,0,n)
        {
            if(arr[i]*3 == 2*arr[n-1])
                res+=p;
            else if(arr[i]*3 == arr[n-1])
                p++;
        }
        cout<<res;
    }
}