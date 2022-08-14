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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll ans = 1e18;
        for(ll i =0;i<2;i++){
            ll da = min(a-x,n);
            ll db = min(n-da,b-y);
            ans = min(ans , ((a-da)*1ll*(b-db)));
            swap(a,b);
            swap(x,y);
        }
        cout<<ans<<endl;
    }
    return 0;
}