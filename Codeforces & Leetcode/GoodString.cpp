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
        string s;
        cin>>s;
        if(n==1) cout<<0<<endl;
        if(n==2){
            if(s[0]!=s[1]) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            ll ct= count(all(s),'<');
            ll ct1= count(all(s),'>');
            if(ct==ct1) cout<<ct1<<endl;
            else{
                ll ans = min(ct,ct1);
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}