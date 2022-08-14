#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int a,b,c,d,e;
    while(t--){
        cin>>a>>b>>c>>d>>e;
        if((a<e && b+c<=d )||(b<e && a+c<=d) || (c<e && a+b<=d)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}