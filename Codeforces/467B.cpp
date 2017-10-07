#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

int bits(ll n){
    int res = 1;
    while(n&n-1){
        res+=1;
        n = n&n-1;
    }
    return res;
}
int main()
{
    ll n,m,k,x,i;
    cin>>n>>m>>k;
    vector<int>res;
    fl(i,0,m+1){
        cin>>x;
        res.pb(x);
    }
    int fin_res = 0;
    int cmp = res.back();
    fl(i,0,res.size()-1){
        if(bits(cmp^res[i]) <= k){
            fin_res+=1;
        }
    }
    cout<<fin_res;
}