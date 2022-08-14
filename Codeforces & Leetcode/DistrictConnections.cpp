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
       vector<pair<ll,ll>> pair;
       ll idx=-1;
       for(int i=1;i<n;i++){
           if(v[i] != v[0]){
               idx = i;
               pair.push_back({1,i+1});
           }
       } 
       if(idx==-1) {cout<<"NO"<<endl;continue;}
       for(int i=1;i<n;i++){
           if(v[i]==v[0]){
               pair.push_back({idx+1,i+1});
           }
       }
       cout<<"YES"<<endl;
       rep(i,pair.size()) cout<<pair[i].first<<" "<<pair[i].second<<endl;

    }
    return 0;
}