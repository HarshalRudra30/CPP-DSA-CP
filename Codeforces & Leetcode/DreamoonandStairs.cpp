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
    int n,m;
    cin>>n>>m;
    int x=0;
    if(m>n){
        cout<<-1<<endl;
    }
    else{
        if(n%2==0){
             x = n/2;
        }
        else
            x = (n/2) +1;
        
        while(x%m!=0){
            x++;
        }
        cout<<x<<endl;
        
    }
    timetaken;
    return 0;
}