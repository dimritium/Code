#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
    vector<int>v;
    for(int i = 0; i<5;i++)
        v.push_back(i);
    vector<int>res;
    res = v;
    v.erase(v.begin(),v.end());
    v = res;
    for(int i = 0; i<5; i++)
        cout<<v[i];
}