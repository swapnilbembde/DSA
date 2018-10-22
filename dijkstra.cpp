#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    ifstream input("dijk.txt");
    input>>n>>m;
    vector <pair<int,int> > v[n];
    int dist[n];
    bool vis[n];
    int x,y,cost;
    for(int it=0;it<m;++it){
        input>>x>>y>>cost;
        v[x].push_back({y,cost});

    }
    dist[1]=0;
    memset(vis, false , sizeof vis);
    multiset< pair <int,int> > s;
    s.insert({1,0});

    while(!s.empty()){
        pair <int,int> p = *s.begin();
        s.erase(s.begin());
        int x =p.first; int weight = p.second;
//        cout<<x<<" "<<weight<<endl;
        if( vis[x])continue;
        vis[x] =true;

        for(unsigned i=0;i<v[x].size();++i){
            int edge = v[x][i].first; int wie = v[x][i].second;
            if(weight+wie < dist[edge]){
                dist[edge] = weight +wie;
                s.insert({edge,dist[edge]});
            }

        }

    }
    for(int itr =2;itr<=n;++itr){
      cout<< dist[itr]<<" ";
    }
} 
