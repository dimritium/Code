#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin>>n;
    multiset<string>v[101];
    multiset<string>::iterator it;
    for(ll i = 0; i<n; i++){
        string name;
        int marks;
        cin>>name>>marks;
        v[marks].insert(name);
    }
    for(ll i = 100; i>0; i--){
        if(v[i].size()!=0){
            for(it = v[i].begin(); it!=v[i].end(); it++)
                cout<<*it<<" "<<i<<endl;
        }
    }
}