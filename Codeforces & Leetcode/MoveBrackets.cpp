/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int bal=0;
        int ans =0;
        for(int i=0;i<n;i++){
            if(s[i] =='(') bal++;
            else{
                bal--;
                if(bal<0){
                    bal=0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}