#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define MOD 1000000007
using namespace std;

ll nC2(ll n){
    if(n<2)
        return 0;
    return n*(n-1)/2;
}
int main()
{
    ll m,n,max_f,min_f;
    cin>>n>>m;
    max_f = nC2(n-m+1);
    min_f = (m - n%m)*(nC2(n/m)) + (n%m)*(nC2(n/m+1));
    cout<<min_f<<" "<<max_f;
}