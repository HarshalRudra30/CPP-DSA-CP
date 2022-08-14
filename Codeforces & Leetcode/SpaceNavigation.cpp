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
        ll x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        sort(all(s));
        int checkx=0;
        int checky=0;
        if(x>0){
            int cnt=count(all(s), 'R');
            if(cnt<x) {cout<<"NO"<<endl;checkx=1;}
            else checkx=0;
        }
        else{int cnt=count(all(s),'L');
            if(cnt<abs(x)){
                cout<<"NO"<<endl;checkx=1;
            }
            else{checkx=0;}
        }
        if(checkx==0){
        if(y>0){
            int cnt=count(all(s), 'U');
            if(cnt<y) {cout<<"NO"<<endl;checky=1;}
            else checky=0;
        }
        else{int cnt=count(all(s),'D');
            if(cnt<abs(y)){
                cout<<"NO"<<endl;checky=1;
            }
            else{checky=0;}
        }
        if(checky==0){
            cout<<"YES"<<endl;
        }
 
        }
    }
    timetaken;
    return 0;
}