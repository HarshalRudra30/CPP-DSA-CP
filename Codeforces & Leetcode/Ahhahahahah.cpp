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
        ll ct0 = count(all(v),0);
        ll ct1 = count(all(v),1);
        vll ans;
        if(ct0>=n/2){
            cout<<ct0<<endl;
            rep(i,n){
                if(v[i]==0) cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(ct1>=n/2){
            if(ct1%2==0){
            cout<<ct1<<endl;
            rep(i,n) if(v[i]==1) cout<<v[i]<<" ";
            cout<<endl;
            }
            else{
                ct1 --;
                cout<<ct1<<endl;
                ll count = 0;
                rep(i,n){
                    if(v[i]==1){
                        cout<<v[i]<<" ";
                        count++;
                    }
                    if(count == ct1) break;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}