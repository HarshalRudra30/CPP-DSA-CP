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
    vll v(n);
    rep(i,n) cin>>v[i];
    if(is_sorted(all(v))) {cout<<"yes"<<endl;cout<<1<<" "<<1<<endl;}
    else{
        vll temp;
        ll start =0;
        ll end=0;
        rep(i,n-1){
            if(v[i]>v[i+1]){
                start = i;
                break;
            }
        }
        for(ll i=start; i<n-1;i++){
            if(v[i]<v[i+1]){
                end = i;
                break;
            }
            if((i+1) == n-1) {end = i+1;break;} 
        }
        for(ll i = start; i<=end;i++){
            temp.push_back(v[i]);
        }
        reverse(all(temp));
        ll it =0;
        for(ll i = start; i<=end;i++){
            v[i] = temp[it];
            it++;
        }
        if(is_sorted(all(v))) {cout<<"yes"<<endl;cout<<start+1<<" "<<end+1<<endl;}
        else cout<<"no"<<endl;
    }
    return 0;
}