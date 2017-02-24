#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int n,i,ft,x,y;
    vector<long long int>v;
    long long int count;
    cin>>tc;
    while(tc--)
    {
        count=0;
        cin>>n;
        cin>>ft;
        v.push_back(ft);
        for(i=1;i<n;i++)
        {
            cin>>x;
            v.push_back(x-ft);
            ft=x;
        }
       for(i=0;i<n;i++)
       {
           cin>>y;
           if((v[i]-y)>=0){
            count++;
           }
       }
       cout<<count<<endl;
       v.erase(v.begin(),v.end());
    }
}
