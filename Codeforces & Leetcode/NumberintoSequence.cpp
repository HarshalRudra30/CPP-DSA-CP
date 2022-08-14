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
        
            vector<pair<ll,ll>> val;
            for (ll i = 2; i * i <= n; ++i) {
                ll cnt = 0;
                while (n % i == 0) {
                    ++cnt;
                    n /= i;
                }
                if (cnt > 0) {
                    val.push_back({cnt, i});
                }
            }
            if (n > 1) {
                val.push_back({1, n});
            }
            /*rep(i,val.size()) cout<<val[i].first<<" "<<val[i].second<<" ";
            cout<<endl; */
            sort(val.rbegin(), val.rend());
            vll ans(val[0].first, val[0].second);
            for (ll i = 1; i < val.size(); ++i) {
                for (ll j = 0; j < val[i].first; ++j) {
                    ans.back()*=val[i].second;
                }
            }
            cout<<ans.size()<<endl;
            rep(i,ans.size()) cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}