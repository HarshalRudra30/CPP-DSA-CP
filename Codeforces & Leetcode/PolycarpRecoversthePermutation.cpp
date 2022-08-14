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
        int maxx =0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(v[0] !=n && v[n-1] != n){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}