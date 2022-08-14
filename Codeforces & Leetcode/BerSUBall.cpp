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
    ll n,m;
    cin>>n;
    vector<ll> b(n);
    rep(i,n) cin>>b[i];
    cin>>m;
    vector<ll> g(m);
    rep(i,m) cin>>g[i];
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    ll count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( (abs(b[i]-g[j])<=1)) {count++;g[j]=-5;break;}
        }
    }
    cout<<count<<endl;

    return 0;
}