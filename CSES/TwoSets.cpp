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
ll solve(vll v,ll key){
    ll n = v.size();
    rep(i,n){
        if(v[i] == key) return i;
    }
}
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2!=0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vll v;
        vll :: iterator it;
        rep(i,n) v.push_back(i+1);
        vll s1,s2;
        reverse(all(v));
        ll x=0;
        rep(i,n){
            x += v[i];
            s1.push_back(v[i]);
            if(x>(sum/2)){
                x -= v[i];
                s1.pop_back();
                ll temp = abs((sum/2) -x);
                ll idx = solve(v,temp);
                s1.push_back(v[idx]);
                v[idx] = -1;
                break;
            }
            v[i] = -1;
        }
        rep(i,n) if(v[i] != -1)s2.push_back(v[i]);
        if(s1[s1.size()-1] == 0) s1.pop_back();
        if(s2[s2.size()-1] == 0) s2.pop_back();
        cout<<s1.size()<<endl;
        rep(i,s1.size()) cout<<s1[i]<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        rep(i,s2.size()) cout<<s2[i]<<" ";
        cout<<endl;
    }
    return 0;
}