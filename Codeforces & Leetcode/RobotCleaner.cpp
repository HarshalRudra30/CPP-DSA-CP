#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n,m,r1,c1,r2,c2;
        cin>>n>>m>>r1>>c1>>r2>>c2;
        int count=0;
        int b=1;
        int f=1;
        while(true){
            if(r1==n || r1==0){
                f*=-1;
            }
            if(c1==m || c1==0){
                b*=-1;
            }
            if(r1==r2||c1==c2){
            cout<<count<<endl;
            break;
            }
            r1+=f;
            c1+=b;
            count++;
        }
    }
    return 0;
}