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
        string s = to_string(n);
        ll ct = count(all(s),'0');
        ll length = s.length();
        if(n<10) {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else if(ct==(length-1)){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            cout<<length-ct<<endl;
            for(ll i=0;i<length-1;i++){
                ll x = n%10;
                if(x!=0) cout<<x*pow(10,i)<<" ";
                n/=10;
            }
            cout<<n*pow(10,length-1)<<endl;
        }
    }
    return 0;
}