#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0]; 
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Reversed string is: ";
    reverse(s);
    return 0;

}