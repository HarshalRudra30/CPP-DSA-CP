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
vll dp(N);
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        if(isSquare(n/2) && n%2==0) cout<<"YES"<<endl;
        else if(n%4==0 && isSquare(n/4)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}