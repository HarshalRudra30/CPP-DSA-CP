#include <iostream>
using namespace std;

class Circle
{
    float r;

public:
    float getData()
    {
        float a;
        cout << "Enter value for radius: ";
        cin >> r;
        a = 3.14 * r * r;
        return a;
    }
    /*float area()
    {
        float a;
        a = 3.14 * r * r;
        return a;
    }*/
    void display()
    {
        float v;
        v = getData();
        cout << "Area of circle is: " << v;
    }
};

int main()
{
    Circle c1;
   // c1.getData();
    //c1.area();
    c1.display();
    return 0;
}