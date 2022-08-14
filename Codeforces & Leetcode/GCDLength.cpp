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
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
int nextPrime(int N)
{
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    tt{
        ll a,b,c;
        cin>>a>>b>>c;
        ll n = pow(10,c-1);
        ll x = nextPrime(n);
        ll ans1;
        ll ans2;
        if(c==a || c==b) {
            if(c==a) ans1=x;
            else ans2=x;
        } 
        else{
            while(true){
                x *=x;
                string y = to_string(x);
                if(a==y.length()){
                    ans1=x;
                    break;
                }
            }
            if(a==b){
                ans2=ans1;
            }
            else{
                while(true){
                    x *= x;
                    string y = to_string(x);
                    if(b==y.length()){
                        ans2=x;
                        break;
                    }
                }
        }
            cout<<ans1<<" "<<ans2<<endl;
        }

    }
    return 0;
}