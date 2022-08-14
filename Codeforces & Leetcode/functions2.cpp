#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04)
{
    return currentMoney*factor;
}

int main()
{
    int money;
    cout<<"Enter your current balance in your account: ";
    cin>>money;
    cout<<"If you have "<<money<<" in your bank account then you will receive a total of "<<moneyReceived(money)<<" after 1 year!";
    return 0;
}