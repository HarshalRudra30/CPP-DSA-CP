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
    ll n,a;
    cin>>n>>a;
    vll v(n);
    vll :: iterator it;
    rep(i,n) cin>>v[i];
    ll flag=0;
    ll idx1,idx2;
    rep(i,n){
        ll temp = a - v[i];
        it = find(all(v),temp);
        if(it!=v.end()){
            idx1 = i;
            idx2 = it-v.begin();
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"IMPOSSIBLE"<<endl;
    else cout<<idx1+1<<" "<<idx2+1<<endl;
    return 0;
}