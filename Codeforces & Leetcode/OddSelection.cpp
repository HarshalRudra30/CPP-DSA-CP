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
        ll n,x;
        cin>>n>>x;
        vll v(n);
        ll odd=0;
        ll even =0;
        rep(i,n) {
            cin>>v[i];
            if(v[i]%2==0) even++;
            else odd++;
        }
        if(even==0){
            if(x%2==0) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else if(odd==0) cout<<"No"<<endl;
        else{
            ll y = x-even;
            if(y%2==0){
                if(odd>=y+1) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else cout<<"Yes"<<endl;
        }

    }
    return 0;
}