#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int count0=0;
        int count1=0;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }

        int total_time = (a*count0) + (b*count1);
        cout<<total_time<<endl; 
    }
    return 0;
}