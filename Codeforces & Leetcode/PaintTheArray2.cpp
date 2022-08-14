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
        ll x =0;
        ll y =0;
        for(int i=0;i<n;i+=2){
            x = __gcd(x,v[i]);
        }
        for(int i=1;i<n;i+=2){
            y = __gcd(y,v[i]);
        }
        //cout<<x<<" "<<y<<endl;
        bool check1 = 0;
        bool check2 = 0;
        for(int i=0;i<n;i+=2){
            if(v[i]%y==0) check1=1;
        }
        for(int i=1;i<n;i+=2){
            if(v[i]%x==0) check2=1;
        }
        if(check1==1 && check2==1) cout<<0<<endl;
        else if(check1==1) cout<<x<<endl;
        else cout<<y<<endl;
    }
    return 0;
}