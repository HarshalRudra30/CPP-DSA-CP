#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int r1,r2,r3,g1,g2,g3,b1,b2,b3;
        int n;
        cin>>n;
        cin>>r1>>g1>>b1>>r2>>g2>>b2>>r3>>g3>>b3;
        if(r2>g1){
            cout<<r2+r3+g3<<endl;
        }
        else{
            cout<<g1+r3+g3<<endl;
        }

    }
    return 0;
}