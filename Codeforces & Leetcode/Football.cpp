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
    vector<string> s(n);
    string s1;
    string s2;
    rep(i,n) {
        cin>>s[i];
        s1 = s[0];
        if(s[i] != s1) s2 = s[i];
    }
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(s[i] == s1) count1++;
        else count2++;
    }
    if(count1>count2) cout<<s1<<endl;
    else cout<<s2<<endl;
    timetaken;
    return 0;
}