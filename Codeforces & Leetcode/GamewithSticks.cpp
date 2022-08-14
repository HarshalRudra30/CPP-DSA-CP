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
    int check=0;
    int i=0;
    while(true){
        if(n==0 || m==0){
            if(check==0){cout<<"Akshat"<<endl;}
            else cout<<"Malvika"<<endl;
            break;
        }
        if(i%2==0){
            check = 0;
        }
        else{
            check = 1;
        }
        n--;
        m--;
        i++;
    }
    timetaken;
    return 0;
}