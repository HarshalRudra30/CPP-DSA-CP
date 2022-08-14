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
        string s,ans;
        cin>>s>>ans;
        ll one=0;
        ll zero=0;
        vector<pair<ll,ll>> v;
        ll j =0;
        rep(i,n){
            if(s[i]=='1') one++;
            else zero++;
            if(one==zero){
                v.push_back(make_pair(j,i));
                j = i+1;
            }
        }

        for(auto i: v){
            ll start = i.first;
            ll end = i.second;
            if(s[start] == ans[start]) continue;
            else{
                for (ll j = start; j <=end; j++)
                {
                    /* code */
                    if(s[j] == '1') s[j] ='0';
                    else s[j] = '1';
                }
                
            }
        }

        if(s==ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}