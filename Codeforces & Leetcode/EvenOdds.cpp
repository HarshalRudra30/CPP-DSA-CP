#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    long long n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<((k-(n+1)/2) * 2)<<endl;
    }
    return 0;
}