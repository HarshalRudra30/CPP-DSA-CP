#include<iostream>
using namespace std;

string removeDuplicate(string s){
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    else{
        return (ch+ans);
    }
    
    
}
int main(){
    string s;
    cout<<"Enter any string: "<<endl;
    cin>>s;
    cout<<"Your string after removing all duplicate character is: "<<endl;
    cout<<removeDuplicate(s);
    return 0;
}