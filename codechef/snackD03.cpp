#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s;
    vector<long long int>v;
    long long int k,i,c,ft,dt;
    cin>>tc;
    while(tc--)
    {
        dt=0;
        cin>>s>>k;
        sort(s.begin(),s.end());
        for(i=0;i<s.size();i++)
        {
            c=1;
            while(s[i]==s[i+1])
            {
                c++;
                i++;
            }
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        ft=v[0];
        for(i=1;i<v.size();i++)
        {
            if((v[i]-ft)>k)
            {
                if((v[i]-ft)/2>k)
               {
                dt+=ft;
                ft=v[i];
               }
              else
                dt+=(v[i]-ft)-k;
            }
        }
        cout<<dt<<endl;

        v.erase(v.begin(),v.end());
        s.erase(s.begin(),s.end());
    }
}
