#include<iostream>
using namespace std;

class Atm
{
    float bal;
    public:
    float acc_balance();
    float withdraw(float);
};

float Atm ::acc_balance(){
    cout<<"Your account balance: "<<endl;
    cin>>bal;
}
float Atm ::withdraw(float w){
    bal = bal - w;
    bal = bal - 0.5;
    return bal;
}

int main(){
    int x;
    Atm a1;
    a1.acc_balance();
     cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>x;
    if (x%5 == 0    )
    {
        cout<<a1.withdraw(x);
    }
    else{
        cout<<"Withdraw amount should be multiple of 5"<<endl;
    }
    return 0;
    
}