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
        ll n,y;
        cin>>n>>y;
        ll v[n];
        rep(i,n) cin>>v[i];
        vll b(y);
        rep(i,y) cin>>b[i];
        sort(v,v+n);
        rep(i,y){
            cout<<upper_bound(v,v+n,b[i])-v<<" ";
        }
        cout<<endl;
    return 0;
}