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
    ll n;
    cin>>n;
    if(n>=0) cout<<n<<endl;
    else{
        ll x = abs(n%10);
        ll a = n/10;
        ll y = abs(a%10);
        if(x>y){
            cout<<a<<endl;
        }
        else{
            ll b = n%10;
            n = n/100;
            n *= 10;
            n +=  b;
            cout<<n<<endl;
        }

    }
    timetaken;
    return 0;
}