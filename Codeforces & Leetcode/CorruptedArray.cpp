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
        vll v;
        ll total=0;
        rep(i,n+2){
            ll x;
            cin>>x;
            total += x;
            v.push_back(x);
        }
        sort(all(v));
        total -= (v[n]+v[n+1]);
        if(total == v[n] || total == v[n+1]){
            rep(i,n) cout<<v[i]<<" ";
            cout<<endl;
        }
        else{
            ll flag =0;
            rep(i,n){
                ll temp = total-v[i];
                if(temp+v[n]==v[n+1]){
                    flag = 1;
                    v[i] = v[n];
                    break;
                }
            }
            if(flag==0) cout<<-1<<endl;
            else {rep(i,n) {cout<<v[i]<<" ";}cout<<endl;}
        }
        
    }
    return 0;
}