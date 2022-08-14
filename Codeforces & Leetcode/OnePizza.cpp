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
    unordered_set<string> likes;
    unordered_set<string> dislikes;
    tt{
        ll l,d;
        cin>>l;
        for(int i=0;i<l;i++){
            string s;
            cin>>s;
            likes.insert(s);
        }
        cin>>d;
        for(int i=0;i<d;i++){
            string s;
            cin>>s;
            dislikes.insert(s);
        }
    }
    for(string z: likes){
        for(string g : dislikes){
            if(z==g) likes.erase(z);
        }
    }

    ll x = likes.size();
    cout<<x<<" ";
    for(auto it = likes.begin();it!=likes.end();it++){
        cout<<" "<<*it;
    }
    cout<<endl;
    return 0;
}