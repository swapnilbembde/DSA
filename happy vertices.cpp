#include <bits/stdc++.h>
using namespace std;

int happy=0;
vector <int> adj [100001];
int vis[100001] ={0};
bool root= true;
void dfs(int s){
    vis[s] = 1;
    int pchild;
    if(root)
    {pchild =adj[s].size();root=false;}
    else pchild = adj[s].size() -1;
    for(int i=0;i<adj[s].size();++i){
    
        if(vis[adj[s][i]] ==0){
            if(adj[adj[s][i]].size()-1>pchild)
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
        root =true;
    }
    cout<<happy;
    
    
    
}
