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
    ll n;
    cin>>n;
    vector<vector<ll>> v;
    v[0][0] = 1;
    v[0][1] = 1;
    v[1][1] = 1;
    rep(i,n)
    {
        rep(j,n){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=3;i<n;i++){
        vll temp;
        rep(j,i+1){
                ll x = v[i-1][j-1] + v[i-1][j];
                cout<< v[i-1][j-1]<<endl;
                cout<<x<<endl;
                if(j==0)temp.push_back(1);
                else if(j==i) temp.push_back(1);
                else temp.push_back(x);
        }
        v.push_back(temp);
    }
    rep(i,n){
        rep(j,n){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}