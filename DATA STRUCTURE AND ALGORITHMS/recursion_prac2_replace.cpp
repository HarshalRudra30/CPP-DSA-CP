#include<iostream>
using namespace std;

void replacePI(string s){
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i' )
    {
        cout<<"3.14";
        replacePI(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePI(s.substr(1));
    }
}

int main(){
    string s;
    cout<<"Enter a string with Pi in it: "<<endl;
    cin>>s;
    cout<<"Modified string after replacing Pi with 3.14 is: "<<endl;
    replacePI(s);
    return 0;
}