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
    vector<pair<ll,ll>> v;
    ll sum=0;
    rep(i,n){
        ll x;
        cin>>x;
        sum += x;
        v.push_back(make_pair(x,i+1));
    }
    sort(all(v));
    vll ans;
    ll x = v[n-1].first;
    ll y = v[n-1].second;
    sum -= x;
    v.pop_back();
    rep(i,n-1){
        if(sum - v[i].first == x) ans.push_back(v[i].second);
    } 
    ll z = v[n-2].first;
    ll w = v[n-2].second;
    v.pop_back();
    sum -= z;
    if(sum == z) ans.push_back(y);
    cout<<ans.size()<<endl;
    if(ans.size()!=0) rep(i,ans.size()) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}