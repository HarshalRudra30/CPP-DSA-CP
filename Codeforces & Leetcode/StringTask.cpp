#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

string RemoveVowels(string s, string newstr){
    for(int i=0;i<s.length();i++){
        if(s[i] == 'A'|| s[i] == 'I'|| s[i] == 'E'|| s[i] == 'O'|| s[i] == 'U'|| s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' || s[i] == 'Y' || s[i] == 'y'){
            continue;
        }
        else{
            newstr += '.';
            newstr += tolower(s[i]);
        }
    }
    return newstr;  
}
int main(){
fast;
    string s;
    cin>>s;
    string newstr = RemoveVowels(s,"");
    cout<<newstr<<endl;
    return 0;
}