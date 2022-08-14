#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    long long x,n;
        cin>>x>>n;
    for(long long i=1;i<=n;i++){
            if(x%2==0){
                x -=i;
            }
            else{
                x += i;
            }
        }
        cout<<x<<endl;
}
int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
    return 0;
}