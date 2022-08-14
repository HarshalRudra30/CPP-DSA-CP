#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Principal amount was: " << principal << endl
         << "Return value after " << years << " year(s) is: " << returnvalue << endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "Enter value for p, y and r: " << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.show();
    cout << "Enter value for p, y and R: " << endl;
    cin >> p >> y >> R;
    b2 = BankDeposit(p, y, R);
    b2.show();
    return 0;
}