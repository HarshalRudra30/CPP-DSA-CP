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
        ll n,m;
        cin >> n >> m;
        deque<ll> v;
        ll sum = 0;
        rep(i,n) {
            cin >> v[i];
            sum += v[i];
        }
        if(sum == m) cout << 0 << endl;
        else {
            ll ct = count(all(v),1);
            if(ct<m) cout << -1 << endl;
            else{
                
            }

        }
    }
    return 0;
}