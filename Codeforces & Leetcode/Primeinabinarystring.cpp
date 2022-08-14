#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(string s){
    for(int i=0;i<s.length();i++){
            if(s[i] =='1' && s[i+1] == '1'  || s[i] == '1' && s[i+1] == '0'){
                cout<<"Yes"<<endl;
                return;
            }
        }
        cout<<"No"<<endl;
}

int main(){
fast;
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s.length()<2){
            cout<<"No"<<endl;
        }
        else{
            solve(s);
        }
        
    }
    return 0;
}