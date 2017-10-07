#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long
#define pb push_back
using namespace std;

int main()
{
int test;
ll n,m,x;
cin>>test;

while(test--)
{
    cin>>n>>m;
    unordered_set<long long int> myset;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        myset.insert(x);
    }
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        int y=myset.find(x);
        if(y!=myset.end())
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
}
}