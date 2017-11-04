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
    int tc;
    ll n,k,i,x;
    cin>>tc;
    while(tc--){
        set<ll>myset;
        set<ll>::iterator it;
        cin>>n>>k;
        fl(i,0,n){
            cin>>x;
            myset.insert(x);
        }
        ll res = 0;
        ll count = 0;
        it = myset.begin();
        while(count<k+1){
            if(it == myset.end()){
                res = *(prev(myset.end())) + (k-count) + 1;
                break;
            }

            if(*it != res){
                count++;
                if(count == k+1){
                    res -= 1;
                }
            }
            else{
                it++;
            }
            res+=1;            
        }
        cout<<res<<endl;
    }
}