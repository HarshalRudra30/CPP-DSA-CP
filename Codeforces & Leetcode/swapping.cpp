#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int c = 0;
    cout << "Enter values for a and b: ";
    cin >> a >> b;
    // Swapping:
    c = a;
    a = b;
    b = c;
    cout << "Values after swapping" << endl;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}