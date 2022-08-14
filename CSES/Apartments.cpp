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
    ll n,m,k;
    cin >> n >> m >> k;
    vll a(n);
    vll b(m);
    ll ans =0;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < m; ++i) cin >> b[i];
	sort(all(a));
	sort(all(b));
	int i = 0, j = 0;
	while (i < n && j < m){
		if (abs(a[i] - b[j]) <= k){
			++i; ++j;
			++ans;
		}
		else{
			if (a[i] - b[j] > k){
				++j;
			}
		    else{
				++i;
			}
		}
	}
	cout << ans << "\n";
    return 0;
}