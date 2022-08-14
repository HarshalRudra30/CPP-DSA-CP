#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i<s1.length();i++){
            if(s1[i] =='?' || s2[i] == '?'){
                count0++;
            }
            else if(s1[i] != s2[i]){
                count1++;
            }
        }
        cout<<count1<<" "<<count0+count1<<endl;
    }
    return 0;
}