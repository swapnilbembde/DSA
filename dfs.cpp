#include<bits/stdc++.h>

using namespace std;

vector <int> adj [100001];
int vis[100001];
int cnt =0;
void dfs(int s){
    vis[s]=1;
    cnt++;
    for (int j=0; j<adj[s].size();++j){
        if (vis[adj[s][j]]==0)
            dfs(adj[s][j]);
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    
    for(int v=0;v<100001;++v)
        vis[v] =0;
    int x,y;
    for (int i=1;i<=m;++i){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }
    int head;
    cin>>head;
    dfs(head);
    cout<<n-cnt;


}
