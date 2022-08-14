/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define scanit for(int i=0;i<n;i++) cin>>v[i]
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    ll n;
    cin>>n;
    vll dp(N);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        ll a=0;
        ll b=0;
        if(i>=1) a = dp[i-1];
        if(i>=2) b = dp[i-2];
        dp[i] = a+b;
    }
    cout<<dp[n]<<endl;
    return 0;
}