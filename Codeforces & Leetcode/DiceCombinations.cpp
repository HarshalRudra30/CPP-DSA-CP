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
    vll dp(n+1,0);
    dp[0] = 1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=6;j++){
            if(j>i) break;
            dp[i] = (dp[i]+dp[i-j]) % MOD;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}