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
        ll n,k;
        cin >> n >> k;
        vll v(n);
        rep(i,n) cin >> v[i];
        vector<pair<ll,ll>> p;
        rep(i,n){
            ll x = k - v[i]%k;
            if(x!=k) p.pb(make_pair(x,v[i]));
        }
        sort(all(p));
        rep(i,p.size()) cout << p[i].first << " " << p[i].second << " ";
        cout << endl;
        ll ct = 0;
        ll x = 0;
        rep(i,p.size()){
            if(p[i].first == x){
                p[i].second += x;
                x++;
                ct++;
            }
            else if(p[i].first < x){
                x += p[i].first;
                ct +=p[i].first;
                p[i].second += x;
                x++;
                ct++;
            }
            else if(p[i].first > x){
                ll nx = x+p[i].second;
                ll temp = k - nx%k;
                x += temp;
                ct+=temp;
                p[i].second += x;
                x++;
                ct++;
            }
        }
        rep(i,p.size()) cout << p[i].first << " " << p[i].second << " ";
        cout << endl;
        cout << x << endl;
    }
    return 0;
}