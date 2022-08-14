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
string solve(string s,ll k){
    string res = "";
    while(k--) res+=s;
    return res;
}
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        string s,t;
        cin>>s>>t;
        ll n1 = s.length();
        ll n2 = t.length();
        ll g = __gcd(n1,n2);
        if(solve(s,(n2/g)) == solve(t,(n1/g))) cout<<solve(s,(n2/g))<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}