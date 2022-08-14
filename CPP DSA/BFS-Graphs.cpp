#include<bits/stdc++.h>
const int N = 1e+5;
using namespace std;
bool visited[N];
vector<int> adj[N];
int main(){
    for(int i=0;i<N;i++){
        visited[i] = 0;
    }
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i =0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }  
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it = adj[node].begin();it!=adj[node].end();it++){
            if(!visited[*it]){
                visited[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}