#include <iostream>
using namespace std;

class complex;

class Calculator
{
    int a, b;

public:
    int sumRealComplex(complex, complex);
    int sumComComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    Calculator calc;
    c1.setNumber(8, 9);
    c1.printNumber();
    c2.setNumber(4, 5);
    c2.printNumber();
    int res = calc.sumRealComplex(c1, c2);
    cout << "Sum of real part of complex number is: " << res << endl;
    int resc = calc.sumComComplex(c1, c2);
    cout << "Sum of complex part of complex number is: " << resc << endl;
    return 0;
}