#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

set<ll>res;
void init(bool arr[], int n){
    ll i,j;
    memset(arr,true,n);
    arr[0] = arr[1] = false;
    for(i = 2; i<=sqrt(n); i++)
        for(j = i*i; j<n; j+=i){
            arr[j] = false;
        }
    fl(i,2,n){
        if(arr[i])
            res.insert(i*i);
    }
}

int main()
{
    bool arr[1000001];
    init(arr,1000001);
    // cout<<arr[7]<<" "<<arr[25];
    ll n, i, x;
    cin>>n;
    set<ll>::iterator it;
    // for(it = res.begin(); it!=res.end(); ++it)
    //     cout<<*it<<"\n";
    fl(i,0,n){
        cin>>x;
        if(res.find(x)!=res.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}