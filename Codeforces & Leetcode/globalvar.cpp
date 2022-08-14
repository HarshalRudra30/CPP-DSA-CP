#include<iostream>
using namespace std;

int c = 45;
int main()
{
    int a,b,c;
    cout<<"Enter the values for a and b rescpectively: "<<endl;
    cin>>a<<endl;
    cin>>b<<endl;
    cout<<"Value for a is: "<<a<<endl;
    cout<<"Value for b is: "<<b<<endl;
    c = a+b;
    cout<<"Value of local c is: "<<c<<endl;
    cout<<"Valuvalue of global c is: "<<::c<<endl;
    
    return 0;
}