#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,pop,count=0;
    list<int>v,u;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
            v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        u.push_back(x);
    }
    while(u.empty()==0)
    {
        if(v.front()==u.front())
        {
            u.pop_front();
            v.pop_front();
            count++;
        }
        else
        {
            pop=v.front();
            v.pop_front();
            v.push_back(pop);
            count++;
        }
    }
    cout<<count;
}
