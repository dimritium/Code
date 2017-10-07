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
    ll n,x,i,cars = 0;
    int arr[5] = {0};
    cin>>n;
    fl(i,0,n){
        cin>>x;
        arr[x]+=1;
    }
    cars+=arr[4];
    
    if(arr[2]&&arr[1]){
        int acc = ((2*arr[2])%4);
        arr[1] = max(0,arr[1]-acc);
    }

    if(arr[3]&&arr[1]){
        int psum = min(arr[3],arr[1]);
        cars+=psum;
        arr[3] = arr[3]-psum;
        arr[1] = arr[1]-psum;
    }

    if(arr[2]){
        cars+=int(ceil(arr[2]/2.0));
    }

    if(arr[3]){
        cars+=arr[3];
    }
    if(arr[1]){
        cars+=int(ceil(arr[1]/4.0));
    }
    cout<<cars;
}