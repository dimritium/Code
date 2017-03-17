#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

struct subset{
 ll parent, rank;
};

ll find_parent(subset subsets[], ll i)
{
    if(subsets[i].parent!=i)
    subsets[i].parent=find_parent(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(subset subsets[], ll x, ll y)
{
    ll xroot = find_parent(subsets, x);
    ll yroot = find_parent(subsets, y);
    if(subsets[xroot].rank > subsets[yroot].rank)
    subsets[yroot].parent = xroot;
    else if(subsets[xroot].rank < subsets[yroot].rank)
    subsets[xroot].parent = yroot;
    else
    {
    subsets[yroot].parent = xroot;
    subsets[xroot].rank++;
    }
}
int main()
{
    ll n, m, flag = 0, x, y, i;
    cin>>n>>m;
    ll roads = m;
    vector< pair<ll, ll> > edges;
    subset subsets[n+5];
    fl(i, 0, n+1)
    {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }
    
    while (m--)
    {
        cin>>x>>y;
        edges.pb(make_pair(x, y));
    }
    fl(i, 0, roads)
    {
        ll xr = find_parent(subsets, edges[i].first);
        ll yr = find_parent(subsets, edges[i].second);
        if(xr==yr)
        {
            flag = 1;
            cout<<"NO";
            break;
        }
        else
        {
            Union(subsets, xr, yr);
        }
    }
    if(!flag)
    cout<<"YES";    
}