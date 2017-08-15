#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

struct subset
{
    ll parent, rank;
};

ll find_parent(subset* subsets, ll i)
{
    if(subsets[i].parent!=i)
    subsets[i].parent = find_parent(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(subset* subsets, ll x, ll y)
{
    ll xroot = find_parent(subsets, x);
    ll yroot = find_parent(subsets, y);
    if(subsets[xroot].rank < subsets[yroot].rank)
    subsets[xroot].parent = yroot;
    else if(subsets[xroot].rank>subsets[yroot].rank)
    subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = x;
        subsets[xroot].rank++;
    }
}

bool comp(const pair<ll, pair<ll,ll> >  &a, const pair<ll, pair<ll,ll> >  &b)
{
    return a.first < b.first;
}
int main()
{
    ll tc, p, n, m;
    cin>>tc;
    while (tc--)
    {
       cin>>p>>n>>m;
       subset subsets[n];
       ll a, i, b, c;
       vector < pair<ll, pair<ll,ll> > > edges;
       vector < pair<ll, pair<ll,ll> > > res;
       
       fl(i, 0, m)
       {
       cin>>a>>b>>c;
       edges.pb(make_pair(c, make_pair(a,b)));
       }
       cout<<"Done";
       //sort(edges.begin(), edges.end(), comp);
       fl(i, 0, n)
       {
           subsets[i].parent = i;
           subsets[i].rank = 0;
       }

       i = 0;
       ll j = 0;
       while(i<n-1){
           ll x = find_parent(subsets, edges[j].second.first);
           ll y = find_parent(subsets, edges[j].second.second);
           if(x!=y){
               res.pb(make_pair(edges[j].first, make_pair(edges[j].second.first, edges[j].second.second)));
               Union(subsets, x, y);
               i++;
           }
           j++;
       }
       ll weight = 0;
       fl(i, 0, n-1)
       {
           weight+=edges[i].first;
       }
       cout<<p*weight<<endl;
    }
    return 0;
}