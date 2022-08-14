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
void check(vector<int> v){
    int od=0;
    rep(i,4){
        if(v[i]%2!=0) od++;
    }
    if(od>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return;
}
 
void solve(vector<int> v){
    rep(i,3){
        if(v[i]==0){cout<<"NO"<<endl;return;}
        else{v[i]-=1;}
    }
    v[3]+=3;
    check(v);
    return;
}
 
int main(){
fast;
    int t;
    cin>>t;
    while (t--)
    {
        int odd=0;
        vector<int> v(4);
        rep(i,4){
            cin>>v[i];
            if(v[i]%2!=0) odd++;
        }
        if(odd>1){
            solve(v);
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}