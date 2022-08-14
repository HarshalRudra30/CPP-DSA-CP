#include<iostream>
using namespace std;
class simplecalc
{
    public:
    float cal(float p, float q){
        char c;
        cout<<"Enter the operation you want to operate for two numbers ";
        cin>>c;
        switch (c)
        {
        case '+':
            cout<<p<<"+"<<q<<"="<<p+q;
            break;
        case '-':
            cout<<p<<"-"<<q<<"="<<p-q;
            break;
        case '*':
            cout<<p<<"*"<<q<<"="<<p*q;
            break;
        case '/':
            cout<<p<<"/"<<q<<"="<<p/q;
            break;
        default:
        cout<<"sorry wrong operation."<<endl;
            break;
        }
    }

};

int main(){
    float x,y;
    cout<<"Enter any two numbers "<<endl;
    cin>>x>>y;
    simplecalc o1;
    o1.cal(x,y);
    return 0;
}