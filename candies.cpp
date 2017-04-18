#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

class Candies
{
    ll i;
    public:
        ll max_candies(const vector<ll> candies);
};

ll Candies::max_candies(const vector<ll> child_ratings)
{
    ll noc = child_ratings.size(), candies = 0;
    vector<ll>candies_front(noc, 1);
    vector<ll>candies_back(noc, 1);

    for(i = 0; i<noc-1; i++)
    {
        if(child_ratings[i] < child_ratings[i+1] && candies_front[i] >= candies_front[i+1])
            candies_front[i+1] = candies_front[i]+1;
        else if(child_ratings[i]>child_ratings[i+1] && candies_front[i] <= candies_front[i+1])
            candies_front[i] = candies_front[i+1]+1;
    }

    for(i = noc-1; i>0; i--)
    {
        if(child_ratings[i] > child_ratings[i-1] && candies_back[i] <= candies_back[i-1])
            candies_back[i] = candies_back[i-1] + 1;
        else if(child_ratings[i-1] > child_ratings[i] && candies_back[i-1] <= candies_back[i])
            candies_back[i-1] = 1 + candies_back[i];
    }

    for(i = 0; i<noc; i++)
    {
        candies += max(candies_front[i],candies_back[i]);
    }

    return candies;
}

int main()
{
    ll n, i, cr;
    cin>>n;
    vector<ll>child_ratings;
    for(i = 0; i<n; i++)
    {
        cin>>cr;
        child_ratings.push_back(cr);
    }
    Candies obj;
    ll candies = obj.max_candies(child_ratings);
    cout<<candies;
}