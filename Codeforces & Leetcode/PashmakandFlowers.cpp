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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    ll minn =INT_MAX;
    ll maxx =INT_MIN;
    rep(i,n){
        ll x;
        cin>>x;
        mp[x]++;
        minn = min(minn,x);
        maxx = max(maxx,x);
    }
    ll diff = maxx-minn;
    if(diff!=0){
        ll ct =0;
        ct += mp[maxx]*mp[minn];
        cout<<diff<<" ";
        cout<<ct<<endl;
    }
    else{
        ll ans = ( n*(n-1))/2;
        cout<<0<<" ";
        cout<<ans<<endl;
    }
    return 0;
}