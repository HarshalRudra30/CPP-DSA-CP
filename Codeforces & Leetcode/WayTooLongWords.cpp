#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char s[100];
    while (t--)
    {
        cin>>s;
        int len = strlen(s);
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
    
}