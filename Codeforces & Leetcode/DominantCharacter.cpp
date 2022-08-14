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
        
        ll ans=1e9;
        rep(i,n){
            vll v(3,0);
            v[s[i]-'a']++;
            ll x= i+7;
            for(ll j=i+1;j < min(n,x);j++){
                v[s[j]-'a']++;
                if(v[0]>v[1] && v[0]>v[2]){
                    ans = min(ans,j-i+1);
                }
            }
        }
        if(ans==1e9) cout<<"-1"<<endl;
        else cout<<ans<<endl;        

    }
    return 0;
}