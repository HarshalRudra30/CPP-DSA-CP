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

ll Smallest(ll n){
    ll smallest = 9;
    while(n){
        ll r = n%10;
        smallest = min(r,smallest);
        n = n/10;
    }
    return smallest;
}
ll Largest(ll n)
{
    ll largest = 0;
 
    while (n) {
        ll r = n % 10;
        largest = max(r, largest);
        n = n / 10;
    }
    return largest;
}
 
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll a,k;
        cin>>a>>k;
        ll ct = 1;
        if(k==1) cout<<a<<endl;
        else{
            ll ans =0;
            for(ll i = ct;i<k;i++){
                ll x = Largest(a);
                ll y= Smallest(a);
                if(x==0 || y==0) break;
                ans = a+(x*y);
                a = ans;
            }
            cout<<a<<endl;
        }
    }
    return 0;
}