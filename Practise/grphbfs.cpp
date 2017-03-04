//level of each node
#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
int level[10];
bool vis[10];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    level[s]=0;
    vis[s]=true;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++)
        {
            if(vis[v[p][i]]==false)
            {
                level[v[p][i]]=level[p]+1;
                q.push(v[p][i]);
                vis[v[p][i]]=true;
            }
        }
    }
}
int main()
{
    int x,y,n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(3);
    for(int i=1;i<=n;i++)
        cout<<i<<" "<<level[i]<<endl;
    return 0;
}
