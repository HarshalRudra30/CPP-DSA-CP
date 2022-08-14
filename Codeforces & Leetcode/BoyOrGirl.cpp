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
      string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    timetaken;
    return 0;
}