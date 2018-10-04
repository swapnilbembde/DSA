/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    vector <int> adj[n+1];
    int level[n];
    bool vis[n];
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        vis[i] = false;
        level[i] = 1;
    }
    vis[n-1] = false;
    level[n-1] =1;
    queue <int> q;
    q.push(1);
    level[0]=1;
    vis[0] = true;
    int lev,out=0;
    cin>>lev;
    while(!q.empty()){   
        // cout<<"true ";
        int p = q.front();
        q.pop();
        // cout<<p<<endl;
        for (int i=0;i< adj[p].size();i++){
            if (vis[adj[p][i]-1]== false){
                level[adj[p][i]-1] = level[p-1] +1;
                q.push(adj[p][i]);
                vis[adj[p][i]-1] = true;
                if(level[adj[p][i]-1] ==lev) 
                out+=1;
                
                // if (level[adj[p][i]-1]>lev+1)
                //     break;break;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<vis[i]<<" "<<level[i]<<endl;
    // }
    
    cout<<out;    
    
    
}
