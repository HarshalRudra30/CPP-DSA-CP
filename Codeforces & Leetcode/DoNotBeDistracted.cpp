#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(int n){
        string s;
        cin>>s;
        vector<int> a(26,0);
        a[s[0]-'A'] =1;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]){
                continue;
            }
            else{
                if(a[s[i] - 'A']>0){
                    cout<<"No"<<endl;
                    return;
                }
                a[s[i]-'A'] =1;
            }
        }
        cout<<"Yes"<<endl;
}
int main(){
fast;
    int t;
    cin>>t;
    int n;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}