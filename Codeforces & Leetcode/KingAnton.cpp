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
        vll a(n);
        vll b(n);
        rep(i,n) cin>>a[i];
        rep(i,n) cin>>b[i];
        ll x = 0;
        ll y = 0;
        ll z = 0;
        ll counter = 0;
        rep(i,n){
            if(b[i]>a[i] && (x==0)){
                counter=1;
                break;
            }
            else if(b[i]<a[i] && (y == 0)){
                counter=1;
                break;
            }
            if(a[i]==1){
                x = 1;  
            }
            else if(a[i]==-1) y = 1;
            else z=1;
        }
        if(counter==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}