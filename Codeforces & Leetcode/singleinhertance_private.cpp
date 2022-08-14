#include<iostream>
using namespace std;

class B
{
    int a;
    public:
    int b;
    void set_ab();
    int get_a();
    void show_a();
};

class D : private B
{
    int c;
    public:
    void multiply();
    void display();
};

void B ::set_ab(){
    cout<<"Enter value for a and b: ";
    cin>>a>>b;
    cout<<endl;
}
int B ::get_a(){
    return a;
}
void B ::show_a(){
    cout<<"a = "<<a;
}

void D ::multiply(){
    set_ab();
    c = b*get_a(); 
}

void D ::display(){
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main(){
    D d;
    d.multiply();
    d.display();
    d.multiply();
    d.display();
    return 0;
}