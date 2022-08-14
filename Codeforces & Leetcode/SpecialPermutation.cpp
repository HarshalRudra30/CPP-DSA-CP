#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n);
    rep(i,n) v[i] = i+1;
    sort(v.begin(),v.end(),greater<int>());
    if(a != v[(n/2)-1]){
        for(int i=0;i<n;i++){
            if(v[i] == a){
                swap(v[(n/2)-1],v[i]);
            }
        }
    }
    if(b != v[(n/2)]){
        for(int i=0;i<n;i++){
            if(v[i] == b){
                swap(v[(n/2)], v[i]);
            }
        }
    }
    int check=0;
    int minh = v[(n/2)-1];
    int maxh = v[n/2];
    for(int i=0;i<(n/2);i++){
        if(minh>v[i]){
            minh = v[i];
            break;
        }
    }
    for(int i=(n/2)+1;i<n;i++){
        if(maxh<v[i]){
            maxh = v[i];
            break;
        }
    }
    if(maxh == b && minh == a){
        rep(i,n) cout<<v[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    }
    return 0;
}