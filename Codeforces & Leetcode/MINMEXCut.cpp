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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count0 = count(s.begin(),s.end(),'0');
        if(count0==0) {
            cout<<0<<endl;
            continue;
        } 
        else{
            int f = s.find('0');
            int l = s.rfind('0');
            if(l-f+1 == count0){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
    }
    timetaken;
    return 0;
}