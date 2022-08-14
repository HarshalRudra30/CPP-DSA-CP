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
    ll n,x;
    cin>>n>>x;
    vll v(n);
    rep(i,n) cin>>v[i];
    sort(all(v));
    ll i = 0;
    ll j = n-1;
    ll ct=0;
    while(i<j){
        if(v[i]+v[j]>x){
            j--;
        }
        else{
            ct++;
            v[i] = -1;
            v[j] = -1;
            i++;
            j--;
        }
    }
    rep(i,n){
        if(v[i]!= -1) ct++;
    }
    cout<<ct<<endl;
    return 0; 
}