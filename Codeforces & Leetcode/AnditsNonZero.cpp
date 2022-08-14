/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define scanit(v,n) for(ll i=0; i<n; i++) cin>>v[i];
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;
vector<vector<int>> cnt(2e5+10,vector<int>(30,0));
void presolve(){
	for (int i = 1; i < 2e5+10; i++)
	{
		cnt[i]=cnt[i-1];
		for (int j = 0; j < 30; j++)
		{
			if(i&(1<<j)){
				cnt[i][j]++;
			}
		}
		
	}
	
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> v=cnt[m];
	int all=m-n+1;
	int ans=all;
	for (int i = 0; i < 30; i++)
	{
		ans=min(ans,all-(cnt[m][i]-cnt[n-1][i]));
	}
	cout<<ans<<endl;
}
int main(){
	fast;
	presolve();
	ll testcase = 1;
	cin >> testcase;
	while (testcase--){
		solve();
	}
	timetaken;
	return 0;
}