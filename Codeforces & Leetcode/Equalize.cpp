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
    string a,b;
    cin>>a>>b;
    ll ct=0;
    rep(i,n){
        if(a[i] != b[i]){
            if(a[i+1] != b[i+1] && a[i]!=a[i+1] && i!=(n-1)){
                ct++;
                swap(a[i],a[i+1]);
            }
            else{
                a[i] = b[i];
                ct++;
            } 
        }
    }
    cout<<ct<<endl;
    return 0;
}