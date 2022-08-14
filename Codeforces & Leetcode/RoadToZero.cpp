/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;

int main(){
fast;
    ll t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        long long count=0;
        if(x>y){
            count+=(x-y)*a;
            ll n = y*b;
            ll m = 2*y*a;
            if(n>m){
                count+=m;
                cout<<count<<endl;
            }
            else{
                count+=n;
                cout<<count<<endl;
            }
        }
        else if(x<y){
            count+=(y-x)*a;
            ll n = x*b;
            ll m = 2*x*a;
            if(n>m){
                count+=m;
                cout<<count<<endl;
            }
            else{
                count+=n;
                cout<<count<<endl;
            }
        }
        else{
            ll n = y*b;
            ll m = 2*y*a;
            if(n>m){
                cout<<m<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
    }
    timetaken;
    return 0;
}