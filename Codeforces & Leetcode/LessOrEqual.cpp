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
vll dp(N);
int main(){
fast;
    ll n,k;
    cin>>n>>k;
    vll v(n);
    rep(i,n) cin>>v[i];
    sort(all(v));
    if(n==k) cout<<v[n-1]<<endl;
    else if(k==0) {
        if(v[0]-1>0) cout<<v[0]-1;
        else cout<<-1<<endl;
    }
    else if(v[k-1]==v[k]) cout<<-1<<endl;
    else if(v[k-1]!=v[k]){
        cout<<v[k-1]<<endl;
    }
    return 0;
}