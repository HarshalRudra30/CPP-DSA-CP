#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
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
        string str1 = "code";
        string str2 = "chef";
        int f1 = s.find(str1);
        int f2 = s.find(str2);
        if(f1<f2){
            cout<<"AC"<<endl;
        }
        else{
            cout<<"WA"<<endl;
        }
    }
    return 0;
}