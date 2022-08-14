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
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    int ct1=0;
    int ct2=0;
    int indexe=0;
    int indexo=0;
    rep(i,n){
        if(v[i]%2==0){
            ct1++;
            indexe=i+1;
        }
        else{
            ct2++;
            indexo=i+1;
        }
    }
    if(ct1==1) cout<<indexe<<endl;
    else cout<<indexo<<endl;
    timetaken;
    return 0;
}