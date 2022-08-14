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
vll wt(N);
vll val(N);


ll solve(ll n,ll w){
    if(n <= 0) return 0;
    if(w <= 0) return 0;
    if(wt[n-1] > w) return solve(n-1,w);
    return max(solve(n-1,w),solve(n-1,w-wt[n-1])+val[n-1]);
}

int main(){
fast;
    ll n;
    cin>>n;
    rep(i,n) {cin>>wt[i];}
    rep(i,n) cin>>val[i];
    ll w;
    cin>>w;
    cout<<solve(n,w)<<endl;
    return 0;
}