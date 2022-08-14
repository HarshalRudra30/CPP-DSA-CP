#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0)
    {
        return;
    }

    inc(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;
    cout << "Series in decreasing order is: " << endl;
    dec(n);
    cout << endl;
    cout << "Series in increasing order is: " << endl;
    inc(n);
    return 0;
}