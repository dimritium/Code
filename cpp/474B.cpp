#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int binSrch(ll arr[], ll x, ll start, ll end){
    int mid = (start+end)/2;
    if(arr[mid] == x || mid == 0 || (arr[mid-1]<x && arr[mid]>x))
        return mid;
    else if(arr[mid]>x){
        return binSrch(arr,x,start,mid);
    }
    else if(arr[mid]<x){
        return binSrch(arr,x,mid,end);
    }
}

int main()
{
    ll n, m, x, i;
    cin>>n;
    ll arr[n];
    cin>>arr[0];
    fl(i,1,n){
        cin>>x;
        arr[i] = arr[i-1]+x;
    }
    cin>>m;
    fl(i,0,m){
        cin>>x;
        cout<<binSrch(arr,x,0,n)+1<<endl;
    }
}