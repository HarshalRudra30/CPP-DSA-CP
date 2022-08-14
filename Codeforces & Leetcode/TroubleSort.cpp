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
        ll n;
        cin>>n;
        vll a(n);
        vll b(n);
        rep(i,n) cin>>a[i];
        rep(i,n) cin>>b[i];
        if(is_sorted(all(a))) cout<<"YES"<<endl;
        else{
            ll count0 = count(all(b),0);
            ll count1 = count(all(b),1);
            if(count0 == 0 || count1 == 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}