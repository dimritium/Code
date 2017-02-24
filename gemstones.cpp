#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int N,count=0,min,j;
    vector<int>v;
    cin>>N;
    string s[N];
    for(int i=0;i<N;i++)
        cin>>s[i];
    for(int i=0;i<N;i++)
    {
     sort(s[i].begin(),s[i].end());
    v.push_back(s[i].size());
    }
    for(int i=0;i<N;i++)
        for(j=0;j<(s[i].size()-1);j++)
    {
        if(s[i][j]==s[i][j+1])
            s.erase(s[i][j]);
    }
    sort(v.begin(),v.end());
    min=v.at(0);
    for(int i=0;i<min;i++)
    {
        int flag=0;
        for(j=0;j<N-1;j++)
    {
        if(s[j][i]==s[j+1][i])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        count++;
    }
    cout<<count;
}
