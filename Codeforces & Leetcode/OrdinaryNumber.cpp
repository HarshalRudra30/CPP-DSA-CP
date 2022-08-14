#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        int ans =0;
        long long k=0;
        for(int i=1;i<=9;i++){
            k = i;
            while(k<=n){
                ans++;
                k = k*10+i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}