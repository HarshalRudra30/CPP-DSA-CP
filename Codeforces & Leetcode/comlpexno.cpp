#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDatabySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNum()
    {
        cout<< "Your complex number is: " << a << "+" << b << "i"<<endl;
    }
    void printSum(){
        cout<< "Sum of both the complex numbers is: " << a << "+" << b << "i"<<endl;
        
    }
};

int main()
{
    complex c1, c2, c3;
    int x[10];
    cout<<"Enter two numbers: ";
    cin>>x[1]>>x[2];
    c1.setData(x[1], x[2]);
    c1.printNum();
    cout<<"Enter two numners: ";
    cin>>x[3]>>x[4];
    c2.setData(x[3], x[4]);
    c2.printNum();
    c3.setDatabySum(c1, c2);
    c3.printSum();
    return 0;
}
