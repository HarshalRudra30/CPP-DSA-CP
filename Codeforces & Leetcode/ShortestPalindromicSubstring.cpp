#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s[0]<<endl;
    }
    return 0;
}