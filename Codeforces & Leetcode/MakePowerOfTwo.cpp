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
ll solve(string a,string b){
    ll i =0;
    ll j =0;
    ll n = a.length();
    ll m = b.length();
    ll ct=0;
    while(i!=n && j!=m){
        if(a[i] == b[j]){
            i++;
            j++;
        }
        else{
            i++;
            ct++;
        }
    }
    if(j<m){
        ct += m-j;
    }
    if(i<n) ct += n-i;
    return ct;
}
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        string s = to_string(n);
        ll ans = INT_MAX;
        rep(i,63){
            ans = min(ans, solve(s,to_string(1LL<<i)));
        }
        cout<<ans<<endl;
    }
    return 0;
}