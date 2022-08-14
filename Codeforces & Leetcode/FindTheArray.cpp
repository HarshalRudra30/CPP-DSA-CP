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
#define pb push_back
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin >> v[i];
        ll flag = 0;
        rep(i,n-1) {
            if(v[i] % v[i+1] != 0 && v[i+1] % v[i] != 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            rep(i,n) cout << v[i] << " ";
            cout << endl;
        }
        else{
            ll odd=0,even=0;
            rep(i,n){
                if(i % 2 == 0) even += v[i];
                else odd += v[i];
            }
            vll ans;
            if(even > odd){
                rep(i,n){
                    if(i % 2 == 0) ans.pb(v[i]);
                    else ans.pb(1);
                }
                rep(i,n) cout << ans[i] << " ";
                cout << endl;
            }
            else{
                rep(i,n){
                    if(i % 2 != 0) ans.pb(v[i]);
                    else ans.pb(1);
                }
                rep(i,n) cout << ans[i] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}