#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(int n){
    if(n%2==0){
        cout<<"2 "<<(n-1)-2<<" 1"<<endl;
    }
    else{
        int curr = (n-1)/2;
        if(curr%2==0){
            cout<<curr-1<<" "<<curr+1<<" "<<1<<endl;
        }
        else{
            cout<<curr-2<<" "<<curr+2<<" "<<1<<endl;
        }
    }
}
int main(){
fast;
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        solve(n);
    }
    return 0;
}