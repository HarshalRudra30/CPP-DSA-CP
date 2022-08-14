#include<iostream>
using namespace std;

char  a[20];
class Bank
{
    
    public:
    int b;
    
    void display(){
        cout<<"Your Name is: "<<a<<endl;
        cout<<"Your balance is: "<<b<<endl;
    }
};

int main(){
    Bank b;
    int balance;
    cout<<"Enter your name: "<<endl;
    cin>>a;
    b.display();
    return 0;
    
    
}