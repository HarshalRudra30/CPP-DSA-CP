#include <iostream>
using namespace std;

class Average
{
    int a, b, c;

public:
    int getData()
    {
        cout << "Enter any three value: ";
        cin >> a >> b >> c;
    }
    int getAvg()
    {
        int avg;
        avg = (a + b + c) / 3;
        return avg;
    }
    void display(void)
    {
        int v;
        v = getAvg();
        cout << "Average of 3 numbers is: " << v;
    }
};
int main()
{
    Average a1;
    a1.getData();
    a1.display();
    return 0;
}