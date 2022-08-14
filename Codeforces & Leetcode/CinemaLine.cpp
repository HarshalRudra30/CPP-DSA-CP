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
    ll ct25=0,ct50=0,check = 0;
    rep(i,n){
        if(v[i]==25) ct25++;
        else if(v[i]==50){
            if(ct25>0){
                ct50++;
                ct25--;
            }
            else{
                check = 1;
                break;
            }
        }
        else if(v[i]==100){
            if(ct25>0 && ct50>0) {
                ct50--;
                ct25--;
            }
            else if(ct25>=3) ct25-=3;
            else{
                check = 1;
                break;
            }
        }
    }
    if(check == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}