/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;
// Function to convert binary to decimal
int binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
 
    ll temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
int main(){
fast;
    ll  n;
    cin>>n;
    ll x = binaryToDecimal(n);
    cout<<x<<endl;
    ll count=0;
    while(true){
        if(x==1){
            cout<<count<<endl;
            break;
        }
        else if(x%2==0){
            x /= 2;
            count++;
        }
        else{
            x+=1;
            count++;
        }
    }
    timetaken;
    return 0;
}