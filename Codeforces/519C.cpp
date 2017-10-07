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
    ll n, m, res = 0, i;
    cin>>n>>m;

    while((m>1 && n>0) || (n>1 && m>0)){
        res+=1;
        if(m>n){
            m-=2;
            n-=1;
        }
        else{
            n-=2;
            m-=1;
        }
    }
    cout<<res;
}