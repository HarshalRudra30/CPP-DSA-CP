/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p); 
}
int main(){
fast;
    ll n;
    cin>>n;
    ll x = highestPowerof2(n);
    if(n == x){
        cout<<1<<endl;
    }
    else{
        cout<<n-x+1<<endl;
    }

    return 0;
}