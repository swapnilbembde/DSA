#include <bits/stdc++.h>
using namespace std;

int happy=0;
vector <int> adj [100001];
int vis[100001] ={0};

void dfs(int s){
    vis[s] = 1;
    // cout<<s<<endl;
    for(int i=0;i<adj[s].size();++i){
        if(vis[adj[s][i]] ==0){
            if(adj[adj[s][i]].size()>adj[s].size())
                happy++;
            dfs(adj[s][i]);
            
        }    
    }
    
    
}

int main(){
    int n,m,x,y;
    cin>>n>>m;
    for(int j=0;j<m;++j){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=1;i<=n;++i){
        if(vis[i]==0)
        dfs(i);
    
    }
    cout<<happy;
    
    
    
}
