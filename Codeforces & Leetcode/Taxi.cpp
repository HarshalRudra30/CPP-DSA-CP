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
    ll n;
    cin>>n;
    vll v(n);
    rep(i,n) cin>>v[i];
    ll ct1 = count(all(v),1);
    ll ct2 = count(all(v),2);
    ll ct3 = count(all(v),3);
    ll ct4 = count(all(v),4);
    ll ans = 0;
    ans += ct4;
    if(ct1>ct3){
        ans += ct3;
        ct1 = ct1-ct3;
        ct3=0;
    }
    else if(ct1<=ct3){
        ans+= ct1;
        ct3 = ct3-ct1;
        ct1=0;
    }
    if(ct3>0){
        ans += ct3;
        ct3=0;
    }
    if(ct2>0){
        ans += ct2/2;
        ct2 = ct2%2;
    }
    ll left = ct1 + (ct2*2);
    if(left<=4 && left>0){
        ans+=1;
    }
    else if(left%4!=0){
        ans += (left/4)+1;
    }
    else{
        ans += left/4;
    }
    cout<<ans<<endl;

    return 0;
}