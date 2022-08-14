#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    complex(void);
    void printNumber(){
        cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void){ 
    cout<<"Enter any two numbers: ";
    cin>>a>>b;

}
int main(){
    complex c1;
    c1.printNumber();
    return 0;
}

/*Notes -->
1.A constructor should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments
5.We cannot refer to their address
