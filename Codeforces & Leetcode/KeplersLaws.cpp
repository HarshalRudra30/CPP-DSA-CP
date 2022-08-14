#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    float t1,t2,r1,r2;
    while(t--){
        cin>>t1>>t2>>r1>>r2;
        if((t1*t1)/(r1*r1*r1) == (t2*t2)/(r2*r2*r2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}