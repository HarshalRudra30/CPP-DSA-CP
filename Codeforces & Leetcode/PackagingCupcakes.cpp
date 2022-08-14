#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 0){
            cout<<(n/2)+1<<endl;
        }
        else{
            cout<<(n+1)/2<<endl;
        }
    }
    return 0;
}