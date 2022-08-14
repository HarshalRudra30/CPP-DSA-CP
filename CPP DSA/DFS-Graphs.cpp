#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int visited[N];
vector<int> adj[N];

void dfs(int node){
    // preorder
    visited[node] = 1;
    

    // inorder
    vector<int> :: iterator it;
    for(it = adj[node].begin();it!=adj[node].end();it++){
        if(visited[*it]);
        else{
            dfs(*it);
        }
    }
    //postorder
    cout<<node<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++) visited[i] = 0;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}