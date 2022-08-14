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
    ll n;
    cin>>n;
    vector<ll> a(N,0);
    ll maxx = -1;
    for(ll i =0; i<n;i++){
        ll x;
        cin>>x;
        a[x]++;
        maxx = max(maxx,x);
    }
    vector<ll> b(N,0);
    b[0] = 0;
    b[1] = a[1];
    for(ll i =2; i<=N;i++){
        b[i] = max(b[i-1],b[i-2]+(a[i]*i));
    }
    cout<<b[maxx]<<endl;
    return 0;
}