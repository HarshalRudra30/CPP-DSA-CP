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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    int sum=0;
    rep(i,n){cin>>v[i];sum+=v[i];}
    int a=sum;
    int c=0;
    for (int i = k; i < n; i++)
    {
        sum+=v[i]-v[i-k];
        if(sum<a){
            a=sum;
            c=i-k+1;
        }
    }
    cout<<c+1<<endl;
    timetaken;
    return 0;
}