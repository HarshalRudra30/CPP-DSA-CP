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
set<string> hasAllCodes(string s, int k) {
    int n = s.length();
    set<string> temp;
    for(int i = 0;i<=n-k;i++){
        string x = s.substr(i,k);
        temp.insert(x);
    } 
    int y = pow(2,k);
    return temp;
}
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    string s;
    cin >> s;
    int k;
    cin >> k;
    set<string> ans = hasAllCodes(s,k);
    for(auto it: ans) cout << it << " ";
    cout << endl;
    return 0;
}