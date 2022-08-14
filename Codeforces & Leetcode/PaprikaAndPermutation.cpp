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
        set<ll> st;
        for(ll i=1;i<=n;i++){st.insert(i);}
        vll rem;
        for(int i=0;i<n;i++){
            int v;
            cin >> v;
            if(st.find(v)!=st.end()){st.erase(v);}
            else{rem.push_back(v);}
        }
        sort(all(rem));
        reverse(all(rem));
        ll pt=0;
        bool err=false;
        for(auto &nx : rem){
            auto it=st.end();
            it--;
            int ctg=(*it);
            if(ctg>(nx-1)/2){err=true;break;}
            st.erase(it);
        }
        if(err){cout << "-1\n";}
        else{cout << rem.size() << '\n';}
    }
    return 0;
}