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
vll dp(N);
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin>>v[i];
        ll check =0;
        for(int i=0;i<n;i++){
            if(v[i]!=1){
            for(int j=0;j<n-1;j++){
                if((v[j]%v[i]!=0) && (v[j+1]%v[i]!=0)){check=1;break;}
                if((v[j]%v[i]==0) && (v[j+1]%v[i]==0)){check=1;break;}
            }
            }
        }
        if(check==1)cout<<0<<endl;
        else cout<<v[0]<<endl;
    }
    return 0;
}