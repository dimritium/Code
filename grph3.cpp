#include<bits/stdc++>
using namespace std;
vector <int>adj[10];
bool visited[10]={false};
void dfs(int s){
visited[s]=true;
for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]==false)
            dfs(adj[s][i])
    }
}
int main()
{

}
