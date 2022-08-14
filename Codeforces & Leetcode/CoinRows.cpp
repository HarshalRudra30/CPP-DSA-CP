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
const int INF = 2e9 + 10;
const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    tt{
        ll m;
        cin>>m;
        vector<vector<ll>> v;
        rep(i,2){
        vll temp;
        rep(j,m){
            ll x;cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        }
        ll sum1=0;
        ll sum2=0;
        rep(i,m) sum1 += v[0][i];
        ll ans= INF;
        rep(i,m){
            sum1 -= v[0][i];
            ans = min(ans,max(sum1,sum2));
            sum2 += v[1][i];
        }
        cout<<ans<<endl;
    }
    return 0;
}