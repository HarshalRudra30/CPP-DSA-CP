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
    ll n,k,x;
    cin>>n>>k>>x;
    vll v(n);
    rep(i,n) cin>>v[i];
    sort(all(v));
    ll count=0;
    vll diff;
    rep(i,n-1){
        diff.push_back(v[i+1]-v[i]);
    }
    sort(all(diff));
    reverse(all(diff));
    while(!diff.empty()){
        ll need = (diff.back()+(x-1))/x-1;
        if(need > k){
            break;
        }
        k -= max(0LL,need);
        diff.pop_back();
    }
    cout<<diff.size()+1<<endl;
    
    return 0;
}