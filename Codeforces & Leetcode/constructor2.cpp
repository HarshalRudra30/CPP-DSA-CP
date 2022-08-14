#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
    //complex(void); --->This is a default constructor i.e it does not take any parameters
    complex (int, int); // This is a parameterized constructer as it takes 2 parameters
    void printNumber(){
        cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y){ 
    a = x;
    b = y; 

}
int main(){
    //Implicit call:
    complex a(4,6);

    //Explict call:
    complex b = complex(5,7);
    a.printNumber();
    b.printNumber();
    return 0;
}