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
    ll n,m;
    cin>>n>>m;
    multiset<ll> s;
    rep(i,n){
        ll x;
        cin>>x;
        s.insert(x);
    }
    rep(i,m){
        ll x;
        cin>>x;
        auto it = s.upper_bound(x);
        if(it==s.begin()) cout<<-1<<endl;
        else{
            cout<<*--it<<endl;
            s.erase(it);
        }
    }
    return 0;
}