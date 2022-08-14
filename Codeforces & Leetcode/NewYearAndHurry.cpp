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
    int n,k;
    cin>>n>>k;
    int time = 240-k;
    int count=0;
    int temp=0;
    for(int i=1;i<=n;i++){
        temp += 5*i; 
        if(temp<=time){
            count++;
        }
    }
    cout<<count<<endl;
    timetaken;
    return 0;
}