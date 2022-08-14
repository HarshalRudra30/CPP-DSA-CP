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
        if(is_sorted(v.begin(), v.end())){
            cout<<0<<endl;
        }
        else if(v[0] == 1 || v[n-1] == n){
            cout<<1<<endl;
        }
        else if(v[0] == n && v[n-1] == 1){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}