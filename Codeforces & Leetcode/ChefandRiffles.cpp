#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

vector<int> solve(vector<int>v,int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans.push_back(v[i]);
        }
    } 
    for(int i=0;i<n;i++){
        if(i%2!=0){
            ans.push_back(v[i]);
        }
    }
    return ans;
}

int Calc(vector<int> v,int n, vector<int>d,int count){
    while(true){
        vector<int>demo;        
        demo =solve(v,n);
        count++;
        rep(i,n) v[i] = demo[i];
        if(v == d){
            break;
        }
    }
    return count;
}
int main(){
fast;
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        vector<int> v,d;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
            d.push_back(i+1);
        }
        int count=Calc(v,n,d,0);
        int a = k%count;
        while(a!=0){
            vector<int> f;
            f = solve(v,n);
            rep(i,n) v[i] = f[i];
            a--;
        }
        rep(i,n) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}