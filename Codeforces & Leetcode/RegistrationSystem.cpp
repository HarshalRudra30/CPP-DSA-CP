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
    ll n;
    cin>>n;
    vector<string> v;
    map<string,ll> mp;
    map<string,ll> :: iterator it;
    rep(i,n){
        string x;
        cin>>x;
        v.push_back(x);
    }    
    rep(i,n){
        if(mp.count(v[i]) == 0){
            cout<<"OK"<<endl;
            mp[v[i]]++;
        }
        else{
            cout<<v[i]<<mp[v[i]]<<endl;
            mp[v[i]]++;
        }
    }


    return 0;
}