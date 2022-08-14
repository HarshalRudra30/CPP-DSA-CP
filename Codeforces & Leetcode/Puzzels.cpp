/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;

int main(){
fast;
    ll n,m;
    cin>>n>>m;
    vector<ll> v(m);
    rep(i,m) cin>>v[i];
    sort(v.begin(),v.end());
    int min =INT16_MAX;
    for(int i=0;i<=m-n;i++){
        int x = v[i+n-1] - v[i];
        if(x<min){
            min = x;
        }
    }
    cout<<min<<endl;
    timetaken;
    return 0;
}