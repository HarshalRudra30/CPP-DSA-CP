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
        ll k,n,m;
        cin>>k>>n>>m;
        vll a(n);
        vll b(m);
        rep(i,n) cin>>a[i];
        rep(i,m) cin>>b[i];
        vll c;
        ll ct=0;
        rep(i,n){
            if(a[i]==0) ct++;
            else c.push_back(a[i]);
        }
        rep(i,m){
            if(b[i]==0) ct++;
            else c.push_back(b[i]);
        }
        sort(all(c));
        ll check =0;
        rep(i,c.size()){
            if(c[i]>k){
                if(ct>0){
                c.insert(c.begin()+i,0);
                ct--;
                }
                else {check=1;break;}
            }
        }
        if(check==1) cout<<-1<<endl;
        else{
            rep(i,c.size()) cout<<c[i]<<" ";
            cout<<endl;
        }

    }
    return 0;
}