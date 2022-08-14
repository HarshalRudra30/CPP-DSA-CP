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
        double n,k;
        cin>>n>>k;
        vector<double> v(n);
        rep(i,n) cin>>v[i];
        double  ans =0;
        double sum = v[0];
        ll flag=0;
        for(ll i =1;i<n;i++){
            ans = (v[i]/sum);
            if(ans > (k/100)) {flag=1;break;}
            sum += v[i];
        }
        if(flag==0) cout<<0<<endl;
        else{
            
        }
    }
    return 0;
}