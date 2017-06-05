#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long 
#define MOD 1000000007
#define pb push_back

using namespace std;

int main()
{
    ll x, n, m, i;
    int arr[100];
    memset(arr,0,sizeof(arr));
    cin>>n>>m;
    for(i=0; i<n; i++){
        cin>>x;
        ++arr[x%m];
    }
    ll ret = 0;
    for(int j=1; j<=m/2; j++){
        ret+=max(arr[j], arr[m-j]);
    }
    ret+=min(1,arr[0]);
    if(m%2 == 0){
        ret += min(1,arr[m/2]);
    }
    cout<<ret;
}