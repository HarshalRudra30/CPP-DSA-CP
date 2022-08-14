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
ll countDivisors(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
 
            else 
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int main(){
fast;
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=0;
    map<ll,ll> mp;
    if(a==1 && b==1 && c==1) {cout<<1<<endl;return 0;}
    rep(i,a){
        rep(j,b){
            rep(k,c){
                ll x = (i+1)*(j+1)*(k+1);
                mp[x]++;
            }
        }
    }
    for(auto i:mp){
        ll y = countDivisors(i.first);
        sum += y*(i.second);
    }
    cout<<sum<<endl;
    return 0;
}