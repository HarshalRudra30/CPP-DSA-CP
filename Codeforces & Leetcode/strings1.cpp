#include<iostream>
using namespace std;

int main(){
    //CONVERT TO LOWERCASE:-
    string str;
    cin>>str;
    cout<<"String in uppercase is: "<<endl;
    for (int i = 0; i <str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
        cout<<str<<endl;

    //CONVERT TO UPPERCASE:-
    string str2;
    cin>>str2;
    cout<<"String in lowercase is: "<<endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
        
    }
    cout<<str;
    return 0;
}