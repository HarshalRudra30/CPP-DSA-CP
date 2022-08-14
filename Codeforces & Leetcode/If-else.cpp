#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"ENter any number: "<<endl;
    cin>>a;
    if (a>0)
    {
        cout<<"A is a positive number!";

    }
    else if (a<0)
    {
        cout<<"A is a negative number!";
    }
    else
    {
        cout<<"A is Zero!";
    }
    return 0 ;
}