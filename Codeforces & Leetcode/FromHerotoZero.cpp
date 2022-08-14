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

int main(){
fast;
    tt{
        ll n,k;
        cin>>n>>k;
        ll count=0;
        while(true){
            if(n==0){
                cout<<count<<endl;
                break;
            }
            else if(n%k==0){
                n /= k;
                count++;
            }
            else{
                ll rem = n%k;
                count += rem;
                n -= rem;
            }
        }
    }
    timetaken;
    return 0;
}