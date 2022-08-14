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
int main(){
fast;
    tt{
        ll x,y;
        cin>>x>>y;
        if(x>3) cout<<"YES"<<endl;
        else if(x==1) if(y==1)cout<<"YES"<<endl;else cout<<"NO"<<endl;
        else if(y<=3) cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
    return 0;
}