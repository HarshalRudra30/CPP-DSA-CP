#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    long long n,d;
    while(t--){
        cin>>n>>d;
        long long ans =0;
        int check =0;
        if(d<=0){ans = pow(2,d);}
        else if(d<=20){ans = 1024*pow(3,d-10);}
        else{cout<<n<<endl;check=1;}
        if(check==0){
            if(ans>n){
                cout<<n<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }

    }
    return 0;
}