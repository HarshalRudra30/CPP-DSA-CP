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
    tt{
        ll n;
    cin >> n;
    map<ll, ll> m, m1;
    rep(i, n){
        ll a;
        cin >> a;
        m[a] = i;
    }
    rep(i, n){
        ll a;
        cin >> a;
        m1[a] = i;
    }
    ll ans = INT_MAX;
    ll curr = INT_MAX;
    for (auto it : m1)
    {
        curr = min(curr, m[it.first - 1]);
        ans = min(ans, curr + it.second);
    }
    cout << ans << endl;
    }
    return 0;
}