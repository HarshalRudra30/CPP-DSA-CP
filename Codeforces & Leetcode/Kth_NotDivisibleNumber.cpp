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
int solve(int n,int k){
    int count=0;
    for(ll i = 1;i<=n;i++){
        if(i%n != 0 || i<n){
            count++;
        if(count==k) return i;
        }
    }
}
int main(){
fast;
    tt{
    ll n,k;
    cin>>n>>k;
    ll count= solve(n,k);
    cout<<count<<endl;    
    }

    timetaken;
    return 0;
}