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
        string s= to_string(n);
        ll x = s.length();
        ll count=0;
        ll check=0;
        for(int i=x-1;i>0;i--){
            if(s[i]=='5'){
                for(int j=i-1;j>=0;j--){
                    if(s[j]=='2' || s[j]=='7'){check=1;break;}
                    else {count++;}
                }
            }
            else if(s[i]=='0'){
                for(int j =i-1;j>=0;j--){
                    if(s[j] == '5' || s[j]=='0'){check=1;break;}
                    else {count++;}
                }
            }
            else count++;
            if(check==1) break;
        }
        cout<<count<<endl;
    }
    return 0;
}