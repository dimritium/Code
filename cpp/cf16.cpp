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
    int n,i,sum=0,n_sum=0,c=0;
    cin>>n; 
    int arr[n];
    fl(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    for(int i = n-1; i>=0 && n_sum<=sum; i--){
        n_sum+=arr[i];
        sum-=arr[i];
        c++;
    }
    cout<<c;
}