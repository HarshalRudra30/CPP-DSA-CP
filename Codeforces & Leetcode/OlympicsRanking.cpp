#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int a,b,c,d,e,f;
    while(t--){
        cin>>a>>b>>c>>d>>e>>f;
        int sum1 = a+b+c;
        int sum2 = d+e+f;
        if(sum1>sum2){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}