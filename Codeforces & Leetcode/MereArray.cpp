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
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin>>v[i];
        vll temp = v;
        sort(all(temp));
        ll flag=0;
        rep(i,n){
            if(v[i]!=temp[i] && v[i]%temp[0]!=0){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}