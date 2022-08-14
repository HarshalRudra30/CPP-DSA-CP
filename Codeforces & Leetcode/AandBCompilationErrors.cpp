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
    vll v1(n);
    vll v2(n-1);
    vll v3(n-2);
    rep(i,n) cin>>v1[i];
    rep(i,n-1) cin>>v2[i];
    rep(i,n-2) cin>>v3[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    ll ans1=0;
    ll ans2=0;
    rep(i,n-1){
        if(v1[i]!=v2[i]){
            ans1 = v1[i];
            break;
        }
        else if(i==n-2){
            ans1 = v1[n-1];
        }
    }
    rep(i,n-2){
        if(v2[i]!=v3[i]){
            ans2 = v2[i];
            break;
        }
        else if(i==n-3){
            ans2 = v2[n-2];
        }
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}