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
    ll n,i,res = 0;
    ll cords[n],trees[n];
    bool visited[n] = {false};
    fl(i,0,n){
        cin>>cords[i]>>trees[i];
        visited[cords[i]] = true;
    }
    
}