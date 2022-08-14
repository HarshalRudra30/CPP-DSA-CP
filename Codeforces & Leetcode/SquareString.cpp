#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s.length()%2 == 0){
            if(s.substr(0,(s.length()/2)) == s.substr((s.length()/2), s.length())){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}