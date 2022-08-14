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
        int count=0;
        vector<int>v;
        for(int i=0;i<=s.length();i++){
            if(s[i] == '1'){
                count++;
            }
            if(s[i] == '0' || i == s.length()){
                v.push_back(count);
                count=0;
            }
        }
        int n= v.size();
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum+=v[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}