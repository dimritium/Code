#include<bits/stdc++.h>
using namespace std;
#define MOD 100000000007;
int main()
{
    int tc;
    long long int r,g,b,k;
    vector<long long int>v;
    cin>>tc;
    while(tc--)
    {
        long long int ma;
        cin>>r>>g>>b;
        cin>>k;
        v.push_back(r);
        v.push_back(g);v.push_back(b);
        sort(v.begin(),v.end());
        if(k<=v[0])
            cout<<3*k-2<<endl;
        else if(k>v[0]&&k>v[1])
            cout<<k+v[0]+v[1]<<endl;
        else if(k>v[0])
            cout<<v[0]+k+k-1<<endl;
        v.erase(v.begin(),v.end());
     }
    return 0;
}
