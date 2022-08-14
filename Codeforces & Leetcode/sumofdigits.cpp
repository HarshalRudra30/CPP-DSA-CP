#include <iostream>
using namespace std;

class S
{
public:
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
};

int main()
{
    S s1;
    int a;
    cout << "Enter any number: ";
    cin >> a;
    cout << "Sum of digits: ";
    cout << s1.getSum(a);
    return 0;
}