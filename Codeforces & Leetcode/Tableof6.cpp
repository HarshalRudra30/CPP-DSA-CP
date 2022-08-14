#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a value: ";
    cin>>a;

    for (int i = 0; i < 11; i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
    return 0;
    
}