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
    tt{
        ll n;
        cin>>n;
        map<ll,ll> mp;
        ll ans=0;
        rep(i,n) {
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(int i=1;i<=2*n;i++){
            ll total = 0;
            for(auto j:mp){
                ll other = i-j.first;
                if(other>=1 && mp.count(other)){
                    total += min(j.second,mp[other]);
                }
            }
            total /=2;
            ans = max(ans,total);
        }
        cout<<ans<<endl;

    }
    return 0;
}