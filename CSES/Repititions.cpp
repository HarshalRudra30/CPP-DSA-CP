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
    string s;
    cin>>s;
    ll count=1;
    ll ans=1;
    rep(i,s.length()) {
        if(s[i]==s[i-1]) 
        {
            count++;
            ans = max(ans,count);
        }
        else {
        count=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}