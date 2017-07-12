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
                st.push(v[p][i]);
                vert++;
            }
        }
    }
    return vert;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        ll cities, roads, cost_lib, cost_road, roads_to_build = 0,conn_comp = 0,v,u,fin_res=1;
        vector<ll>res;
        cin>>cities>>roads>>cost_lib>>cost_road;
        bool visited[cities+1]={false};
        vector<ll>graph[cities+1];
        for(ll i = 0; i<roads; i++){
            cin>>v>>u;
            graph[v].push_back(u);
            graph[u].push_back(v);
        }
        for(ll i = 1; i<=cities; i++){
            if(!visited[i]){
                res.push_back(dfs(i,graph,visited));
                conn_comp++;
            }
        }
        for(ll i = 0; i<conn_comp-1; i++){
            for(ll j = i+1; j<res.size(); j++){
                fin_res += res[i]*res[j];
            }
        }
        cout<<fin_res<<"\n";
        // cout<<min(cost_road*roads_to_build+conn_comp*cost_lib,cost_lib*cities)<<"\n";
        
    }

}