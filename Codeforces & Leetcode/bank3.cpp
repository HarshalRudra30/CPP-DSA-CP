#include <iostream>
using namespace std;
int bal;

class Bank
{
protected:
    char name[20], type[20];

public:
    void getData()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter amount you want to deposit: " << endl;
        cin >> bal;
    }
};

class curt_acct : public Bank
{
public:
    void curt_balance()
    {
        cout << "Current acoount balance after 1 month is: " << bal;
    }
};
class sav_aact : public Bank
{
public:
    void sav_balance()
    {
        bal = bal * 0.05 + bal;
        cout << "Balance after 1 month is: " << bal;
    }
};

int main()
{
    int x;
    Bank b1;
    curt_acct c1;
    sav_aact s1;
    b1.getData();
    cout << "For saving account press 1 & For current account press 2" << endl;
    cin >> x;
    if (x == 2)
    {
        cout << "No interest on current account and you have to keep minimum balance of Rs 1000 " << endl;
        if (bal >= 1000)
        {
            c1.curt_balance();
        }
        else
        {
            cout << "Amount is less than 1000" << endl;
        }
    }
    else
    {
        cout << "In savings account you will get interest of 5% per month " << endl;
        s1.sav_balance();
    }

    return 0;
}
