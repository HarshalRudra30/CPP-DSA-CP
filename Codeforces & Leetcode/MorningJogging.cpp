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
int main(){
fast;
    tt{
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> v;
        ll x = 0;
        rep(i,n){
            vll temp;
            rep(j,m){
                ll x;
                cin>>x;
                temp.push_back(x);
            }
            sort(all(temp));
            rotate(temp.begin(),temp.begin()+temp.size()-x,temp.end());
            v.push_back(temp);
            x++;
        }
        rep(i,n){
            rep(j,m){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}