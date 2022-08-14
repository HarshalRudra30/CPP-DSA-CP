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
    tt{
        string s;
        cin>>s;
        int n = s.size();
        int ideal = 0;
        int mn = 100;
        for(int i=n-2;i>=0;i--){
            string X = s.substr(i , 1);
            string Y = s.substr(i+1 , 1);
            int x = stoi(X);
            int y = stoi(Y);
            if(x+y > 9){
                ideal = i;
                break;
            }
        }
        string X = s.substr(ideal , 1);
        string Y = s.substr(ideal+1 , 1);
        int x = stoi(X);
        int y = stoi(Y);
        mn = x+y;
        string ans;
        for(int i=0;i<ideal;i++)
            ans += s[i];
        ans += to_string(mn);
        for(int i=ideal+2;i<n;i++)
            ans += s[i];
        cout<<ans<<endl;
    }
    return 0;
}