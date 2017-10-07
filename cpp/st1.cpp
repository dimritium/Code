#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long
#define pb push_back
#include <set>

// using namespace std::tr1;
using namespace std;


int main()
{
    int test;
    ll n,m,x;
    cin>>test;
    while(test--)
    {
        set<long long int>myset;
        std::cin>>n>>m;
        for(ll i=0;i<n;i++)
        {
            std::cin>>x;
            myset.insert(x);
        }
        for(ll i=0;i<m;i++)
        {
            cin>>x;
            set<long long int>::iterator it;
            it = myset.find(x);
            if(it!=myset.end())
            {
                std::cout<<"YES\n";
            }
            else
            {
                myset.insert(x);
                cout<<"NO\n";
            }
        }
    }
}