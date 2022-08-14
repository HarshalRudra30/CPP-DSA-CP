#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    int maxx=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            count++;
        }
        else{
            maxx = max(maxx,count);
            count = 1;
        }

    }
    maxx = max(maxx,count);
    cout<<maxx<<endl;
    return 0;
}