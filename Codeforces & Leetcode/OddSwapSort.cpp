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
bool check2(vll v, ll n){
    ll x=2;
    rep(i,n){
        if(v[i]%2==0){
            if(v[i]>=x){
                x = v[i];
            }
            else return false;
        }

    }
    return true;
}
bool check1(vll v, ll n){
    ll x=1;
    rep(i,n){
        if(v[i]%2!=0){
            if(v[i]>=x){
                x = v[i];
            }
            else return false;
        }
    }
    return true;
}
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin>>v[i];
        if(check1(v,n) && check2(v,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}