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
        int count = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == s[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}