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
        vector<pair<ll,ll>> ans;
        rep(i,n) ans.push_back(make_pair(v[i],i+1));
        sort(ans.begin(),ans.end());
        ll count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll x =  ans[i].first * ans[j].first;
                ll y = ans[i].second + ans[j].second;
                if(x==y) count++;
                if(x>2*n) break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}