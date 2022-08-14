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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> v;
        vll temp(n);
        rep(i,n){
            cin>>temp[i];
        }
        rep(i,n){
            v.push_back(make_pair(temp[i],i));
        }
        sort(all(v));
        ll ans =1;
        for(ll i =1;i<n;i++){
            if(v[i-1].second+1 != v[i].second){
                ans++;
            }
        }
        if(ans<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}