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
#define pb push_back
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    ll n,m;
    cin >> n >> m;
    vll v(n);
    ll flag=0;
    rep(i,n) {
        cin >> v[i];
        if(v[i] == m) flag=1;
    }
    if(flag == 1 ) cout << 0 << endl;
    else{
        ll ans = INT_MAX;
        rep(i,n){
            ll sum = v[i];
            for(ll j =i+1;j<n;j++){
                sum += v[j];
                ll x = abs(sum-m);
                ll y = abs(m-v[j]);
                ans = min(ans,min(x,y));
                if(ans == 0) break; 
            }
        }
        cout << ans << endl;
    }
    return 0;
}