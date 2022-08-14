#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int maxx, Max;
    int n;
    int k;
    while(t--){
        cin>>n>>k;
        maxx = 0;
        for(int i = 1; i<=k;i++){
            Max = n%i;
            if(Max>maxx){
                maxx = Max;
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}