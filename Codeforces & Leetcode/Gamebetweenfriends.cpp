#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b ){
            a = a+c;
        }
        else{
            a = b+c;
        }

        if(a<b ){
            a = a+d;
        }
        else{
            b = b+d;
        }
        if(a>=b){
            cout<<"N"<<endl;
        }
        else{
            cout<<"S"<<endl;
        }
        
    }
    return 0;
}