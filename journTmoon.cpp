#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;

ll dfs(ll s,vector<ll>v[],bool visited[]){
    stack<ll>st;
    ll vert = 0;
    st.push(s);
    while(!st.empty()){
        ll p = st.top();
        if(!visited[p]){
            visited[p] = true;
            vert++;
        }
        st.pop();
        for(ll i=0; i<v[p].size(); i++){
            if(!visited[v[p][i]]){
                visited[v[p][i]] = true;
                if(v[v[p][i]].size()>0)
                    st.push(v[p][i]);
                vert++;
            }
        }
    }
    return vert;
}

int main(){
        ll astro, rel, conn_comp = 0,v,u,fin_res=0;
        vector<ll>res;
        cin>>astro>>rel;
        bool visited[astro]={false};
        vector<ll>graph[astro];
        for(ll i = 0; i<rel; i++){
            cin>>v>>u;
            graph[v].push_back(u);
            graph[u].push_back(v);
        }
        for(ll i = 0; i<astro; i++){
            if(!visited[i]){
                ll ast = dfs(i,graph,visited);
                res.push_back(ast);
                fin_res*=ast;
                conn_comp++;
            }
        }
        ll sum = 0, result = 0;
        for(int i = 0; i<res.size(); i++){
            result+=sum*res[i];
            sum += res[i];
        }
        cout<<result;
    }