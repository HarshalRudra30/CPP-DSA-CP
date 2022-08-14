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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll w=0;
    rep(i,n) if(s[i]=='W') w++;
    ll b = n-w;
    if(w%2!=0 && b%2!=0){
        cout<<-1<<endl;
    }
    else{
            vll v;
            if(w%2==0){
                rep(i,n-1){
                    if(s[i]=='W'){
                        s[i] = 'B';
                        v.push_back(i+1);
                        s[i+1] == 'B'? s[i+1]='W':s[i+1] = 'B';
                    }
                }
            }
            else{
                rep(i,n-1){
                    if(s[i]=='B'){
                        s[i] = 'W';
                        v.push_back(i+1);
                        s[i+1] == 'W'? s[i+1]='B':s[i+1] = 'W';
                    }
                }
            }
            cout<<v.size()<<endl;
            rep(i,v.size()){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    return 0;
}