#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    vector<int>v;
    long long int n,i,r,g,b,a[3];
    string s;
    cin>>tc;
    while(tc--)
    {
        r=b=g=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
            s[i]=='R'?(r++):(s[i]=='G'?(g++):(b++));
        v.push_back(r);
        v.push_back(g);
        v.push_back(b);
        sort(v.begin(),v.end());
        if(v[0]==0&&v[1]==0)
            cout<<v[0]<<endl;
        else if(v[0]==v[1]&&v[0]==v[2])
            cout<<2*v[1]<<endl;
        else if(v[0]==0)
            cout<<v[1]<<endl;
        else
            cout<<v[0]+v[1]<<endl;
    s.erase();
    v.erase(v.begin(),v.end());
    }
   return 0;
}
