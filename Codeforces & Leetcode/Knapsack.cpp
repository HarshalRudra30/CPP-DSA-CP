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
        ll n,m;
        cin >> n >> m;
        vector<pair<ll,ll>> v;
        rep(i,n){
            ll x;
            cin >> x;
            v.pb(make_pair(x,i+1));
        }
        sort(all(v));
        reverse(all(v));
        ll sum = 0;
        vll ans;
        rep(i,n){
            sum += v[i].first;
            if(sum > m) sum -= v[i].first;
            else ans.pb(v[i].second);
        }
        if(ans.size() == 0) cout << -1 << endl;
        else{
            sort(all(ans));
            cout << ans.size() << endl;
            rep(i,ans.size()) cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}