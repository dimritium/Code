#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int i=0;
    for(i=0;i<5;i++)
    {
        v.push_back(i);
    }
     for(i=0;i<5;i++)
    {
        cout<<v[i]<<endl;
    }
      cout<<"size "<<v.size()<<endl;
    cout<<v.back();
    cout<<v.front();
    sort(v.begin(),v.end());
    v.erase(v.begin(),v.begin()+2);
     for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

