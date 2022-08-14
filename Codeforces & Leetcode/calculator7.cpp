#include<iostream>
using namespace std;

class calc
{
    float a,b;
    public:
    char c;
    void getdata()
    {
        cout<<"Enter value for a and b: "<<endl;
        cin>>a>>b;
    }
    void getaction()
    {
        cout<<"Enter operation you want to perform: "<<endl;
        cin>>c;
    }
    void cal()
    {
        switch (c)
        {
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
        default:
        cout<<"sorry wrong operation."<<endl;
            break;
        }
    }
};

int main(){
    calc c;
    c.getdata();
    c.getaction();
    c.cal();
    return 0;
}