#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

struct subset
{
    ll parent, rank;
};

ll find_parent(subset* subsets, int i)
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
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

bool comp(const pair<ll, pair<int,int> >  &a, const pair<ll, pair<int,int> >  &b)
{
    return a.first < b.first;
}
int main()
{
    ll  p, m;
    int tc, n;
    cin>>tc;
    while (tc--)
    {
       cin>>p>>n>>m;
       subset subsets[n+5];
       ll i, c;
       int a, b;
       vector < pair<ll, pair<int,int> > > edges;
       vector < pair<ll, pair<int,int> > > res;
       
       fl(i, 0, m)
       {
       cin>>a>>b>>c;
       edges.push_back(make_pair(c, make_pair(a,b)));
       }
       
       sort(edges.begin(), edges.end(), comp);
       
       fl(i, 0, n+1)
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
               res.push_back(make_pair(edges[j].first, make_pair(edges[j].second.first, edges[j].second.second)));
               Union(subsets, x, y);
               i++;
           }
           j++;
       }
       ll weight = 0;
       fl(i, 0, n-1)
       {
           weight+=res[i].first;
       }
       cout<<p*weight<<endl;
       edges.erase(edges.begin(),edges.end());
       res.erase(res.begin(),res.end());
    }
    return 0;
}