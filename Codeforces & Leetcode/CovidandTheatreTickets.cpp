#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        int seats =0;
        if(m%2 == 0){
            seats = m/2;
        }
        else{
            seats = (m+1)/2;
        }
        int rows = 0;
        if(n%2 == 0){
            rows = n/2;
        }
        else{
            rows = (n+1)/2;
        }
        int maxp = rows*seats;
        cout<<maxp<<endl;
    }
    return 0;
}