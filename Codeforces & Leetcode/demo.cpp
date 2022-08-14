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
        ll n;
        cin >> n;
        vector<vll> m;
        ll temp = 1;
        rep(i,n){            
            vll x;
            rep(j,temp){
                if(j<i)
                x.pb(pow(2,j));
                else x.pb(pow(2,temp-j-1));
            }
            rep(k,x.size()){
                if(k == 0) cout<<" "<<x[k];
                else if(x[k]<=8) cout<<"  "<<x[k];
                else if(x[k]>8) cout<<" "<<x[k];
            }
            cout<<endl;
            temp++;
            temp++;
        }
        cout << endl;
    }
    return 0;
}