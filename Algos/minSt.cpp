#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

struct subset{
    ll parent, rank;
};

ll find_parent(subset* subs, ll i){
    if(subs[i].parent!=i)
    subs[i].parent = find_parent(subs, subs[i].parent);
    return subs[i].parent;
}

void Union(subset* subs, ll u, ll v){
    ll x = find_parent(subs, u);
    ll y = find_parent(subs, v);
    if(subs[x].rank==subs[y].rank){
        subs[y].parent = x;
        subs[x].rank++;
    }
    else if(subs[x].rank<subs[y].rank)
    subs[x].parent = y;
    else
    subs[y].parent = x;
}

bool comp(const pair<ll, pair<ll, ll> > &a, const pair<ll, pair<ll,ll > > &b){
    return a.first < b.first;
}
int main()
{
    ll t, p, n, m, a, b, c;
    cin>>t;
    while (t--)
    {
        vector <pair<ll, pair<ll,ll> > > edge;
        cin>>p;
        cin>>n;
        cin>>m;
        subset subs[n+5];
        while(m--)
        {
            cin>>a>>b>>c;
            edge.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(edge.begin(), edge.end(), comp);
        for(ll i=0;i<n;i++){
            subs[i].parent = i;
            subs[i].rank = 0;
        }
        
        vector <pair <ll,pair<ll,ll> > > res;
        ll i = 0, j =0;
        while(i<n-1){
            ll x = find_parent(subs, edge[j].second.first);
            ll y = find_parent(subs, edge[j].second.second);
            if(x!=y){
                res.push_back(make_pair(edge[j].first, make_pair(edge[j].second.first, edge[j].second.second)));
                Union(subs, x, y);
                i++;
            }
            j++;
        }
        ll total = 0;
        for(ll k = 0; k<n; k++){
            total+=res[i].first;
        }
        cout<<p*total<<endl;
    }
}