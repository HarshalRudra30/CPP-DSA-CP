#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string s;
        cin>>s;
        int time=0;
        for(int i=1;i<=s.length();i++){

            int k  = a.find(s[i]) - a.find(s[i-1]);
            time += abs(k);
        }
        cout<<time<<endl;
    }
    return 0;
}

