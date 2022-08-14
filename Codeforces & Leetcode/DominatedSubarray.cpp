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
        ll ans = INT_MAX;
        cin>>n;
        vll v(n+1),pos(n+1);
        for(ll i =1;i<=n;i++){
            cin>>v[i];
            if(!pos[v[i]]){
                pos[v[i]] = i; 
            }
            else{
                ans = min(ans,(i-pos[v[i]]+1));
                pos[v[i]] = i;
            }
        }
        if(ans > n) cout<<-1<<endl;
        else cout<<ans<<endl;
    } 
    return 0;
}