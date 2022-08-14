#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n,x,y;
    while(t--){
        cin>>n>>x>>y;
        int c = (n+1)/2;
        if(x == y || abs(x-c) == abs(y-c)){
            cout<<"0"<<endl;
        }
        else if(x == c && abs(y-c) >1){
            cout<<"0"<<endl;
        }
        else if( y == c && abs(x-c) >1){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}