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
unordered_set<ll> cubes;
const ll N = 1'000'000'000'000L;
void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}

void solve() {
  ll x;
  cin >> x;
  for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}
int main(){
fast;
    precalc();
    tt{
        solve();
    }
    return 0;
}