/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    ll n;
    cin>>n;
    vll a(n);
    rep(i,n) cin>>a[i];
    vll dp(n,1);
    ll ans =0;
    for(int i=1;i<n;i++){
        rep(j,i){
            if(a[i]>a[j]) dp[i] = max(dp[i],1+dp[j]);
        }
        ans = max(dp[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}