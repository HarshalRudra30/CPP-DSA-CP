#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        long long a,n;
        cin>>n>>a;
        if((a*n)%2==0){
            cout<<"Even"<<endl;
        }
        else if((a*n)%2 !=0){
            cout<<"Odd"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}