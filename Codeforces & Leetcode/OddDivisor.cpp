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
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2!=0) cout<<"YES"<<endl;
        else{
            if(isPowerOfTwo(n)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    timetaken;
    return 0;
}