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

bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}
const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll a,b;
        cin>>a>>b;
        ll n = a+b;
        string s;
        cin>>s;
        ll ct = count(all(s),'?');
        if(ct==0) {
            ll ct1 = count(all(s),'1');
            ll ct0 = count(all(s),'0');
            if(ct1==b && ct0 == a){
                if(isPalindrome(s)) cout<<s<<endl;
                else cout<<-1<<endl;
            }
            else cout<<endl;
        }
        else{
            string s1 =s;
            string s2 =s;
            rep(i,n){
                if(s[i]=='?' && s[n-i-1]=='?'){
                    s1[i] = 0; s1[n-i-1] = 0;
                    s2[i] = 1; s2[n-i-1] = 1;
                }
                else if(s[i]=='?'){
                    s1[i] = s[n-1-i];
                    s2[i] = s[n-1-i];
                }
                else if(s[n-i-1]=='?'){
                }
            }
        }
        string s1;
        string s2;

    }
    return 0;
}