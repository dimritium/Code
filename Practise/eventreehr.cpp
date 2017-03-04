#include<bits/stdc++.h>
using namespace std;
int dfs(int);
int n,m,ans=0;
vector<int>adj[105];
bool visited[105]={false};
int dfs(int s)
{
    visited[s]=true;
    int num_vertex=0;
    for(int i=0;i<adj[s].size();i++){
    if(visited[adj[s][i]]==false)
    {
        int num_nodes=dfs(adj[s][i]);
        if(num_nodes%2==0)
            ans++;
            else
                num_vertex+=num_nodes;
    }
    return num_vertex+1;
}
}
int main()
{
    int x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    cout<<dfs;
    return 0;
}


