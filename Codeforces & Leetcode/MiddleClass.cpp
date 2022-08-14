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
        ll n,x;
        cin>>n>>x;
        vll v(n);
        ll sum =0;
        rep(i,n){
            cin>>v[i];
            sum += v[i];
        }
        if((sum/n)>=x) cout<<n<<endl;
        else{
            sort(all(v));
            ll newsum=0;
            ll ct=0;
            ll ct1=0;
            ll check=0;
            rep(i,n){
                newsum += v[n-i-1];
                ct++;
                if((newsum/ct)>=x){
                    ct1++;
                }
                else{
                    newsum -= v[n-i-1];
                    ct--;
                }
            }
            cout<<ct1<<endl;

        }

    }
    return 0;
}