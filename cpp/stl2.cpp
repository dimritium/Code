#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
#define sc scanf
#define pf printf
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        set<string>s;
        set<string>::iterator it;
        string m;
        for(ll i = 0; i<n; i++){
            cin>>m;
            s.insert(m);
        }
        for(it = s.begin(); it!=s.end(); it++){
        cout<<*it<<"\n";
        }

    }
}