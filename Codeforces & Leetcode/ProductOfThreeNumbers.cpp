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
        set<ll> s;
        for(ll i =2 ; i*i <=n;i++){
            if(n%i == 0 && !s.count(i)){
                s.insert(i);
                n /= i;
                break;
            }
        }
        for(ll i =2 ; i*i <=n;i++){
            if(n%i == 0 && !s.count(i)){
                s.insert(i);
                n /= i;
                break;
            }
        }
        if(s.size()<2 || s.count(n) || n==1){
            cout<<"NO"<<endl;
        }
        else { 
            cout<<"YES"<<endl;
            s.insert(n);
            for(auto it:s){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}