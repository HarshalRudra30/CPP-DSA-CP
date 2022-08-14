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
#define pb push_back
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        map<ll,ll> m;
        rep(i,n){
            ll x;
            cin>>x;
            m[x]++;
        }
        ll maxx=0;
        for(auto i : m){
            maxx = max(i.second , maxx);
        }
        ll temp  = n-maxx;
        temp = min(temp , n/2);
        cout<<n-temp*2<<endl;
    }
    return 0;
}