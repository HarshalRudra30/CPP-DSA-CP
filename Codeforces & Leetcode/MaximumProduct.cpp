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
        vll v(n);
        rep(i,n) cin>>v[i];
        sort(all(v));
        ll a1,a2,a3,a4,a5;
        ll product=1;
        ll temp1= v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
        ll temp2 = v[0]*v[1]*v[2]*v[n-1]*v[n-2];
        ll temp3 = v[0]*v[1]*v[n-1]*v[n-2]*v[n-3];
        ll temp4 = v[0]*v[1]*v[2]*v[3]*v[4];
        ll ans = max(max(temp1,temp2),max(temp3,temp4));
        ll temp5 = v[0]*v[1]*v[2]*v[3]*v[n-1];
        ll temp6 = v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[0];
        ans = max(ans,max(temp5,temp6));
        cout<<ans<<endl;
    }
    return 0;
}