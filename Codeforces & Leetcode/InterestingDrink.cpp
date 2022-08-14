/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;
int main(){
fast;
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    int q;
    cin>>q;
    sort(v.begin(),v.end());
    rep(i,q){
        int x;
        cin>>x;
        int c = upper_bound(v.begin(),v.end(),x) - v.begin();
        cout<<c<<endl;  
    }
    timetaken;
    return 0;
}