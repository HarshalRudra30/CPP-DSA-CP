#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int>v(n);
        rep(i,n) cin>>v[i];
        sort(v.begin(), v.end());
        cout<<v[n-1]-v[0]<<endl;
    }
    return 0;
}