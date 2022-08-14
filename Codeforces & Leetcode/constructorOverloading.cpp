#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    void displayNum(){
        cout<<"Number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    Complex c1(4.,6);
    c1.displayNum();
    Complex c2(5);
    c2.displayNum();
    return 0;
}