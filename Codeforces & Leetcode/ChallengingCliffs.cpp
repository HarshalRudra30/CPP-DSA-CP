/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin>>v[i];
        sort(v.begin(),v.end());
        ll pos =-1;
        ll mn = INT_MAX;
        if(n==2){
            cout<<v[0]<<" ";
            cout<<v[1]<<" ";
            cout<<endl;
        }
        else{
        for(int i=1;i<n;i++){
            if(mn>abs(v[i]-v[i-1])){
                pos = i;
                mn = abs(v[i]-v[i-1]);
            }
        }
        for(int i=pos;i<n;i++){
            cout<<v[i]<<" ";
        }
        rep(i,pos) cout<<v[i]<<" ";
        cout<<endl;
        }
    }
    return 0;
}