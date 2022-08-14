#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>t;
        string s[n][1];
        string ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
            cin>>s[i][j];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i][1] != s[i+1][0]){
                ans +=s[i][1] + s[i+1][0];
            }
            else{
                ans +=s[i][1] + s[] 
            }
        }
    }
    return 0;
}