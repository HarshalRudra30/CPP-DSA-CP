#include<iostream>
using namespace std;

int main(){
    int amount;
    int balance;
    char name[20];
    int acc_no;
    int acc;
    
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your account no.: "<<endl;
    cin>>acc_no;
    cout<<"Enter your accoount balance: ";
    cin>>balance;
    cout<<"Welcome to the bank"<<endl;
    cout<<"For every withdrawl $0.5 will be charged"<<endl;
    cout<<"Enter account no. to get your data: ";
    cin>>acc;
    if (acc == acc_no)
    {
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"Account holder data: "<<"                                                    |"<<endl;
        cout<<"Name: "<<name<<"                                                             |"<<endl;
        cout<<"Account no.: "<<acc<<"                                                       |"<<endl;
        cout<<"Balance: "<<balance<<"                                                       |"<<endl;
        cout<<"Enter amount you want to withdraw: "<<"                                      |"<<endl;
        cin>>amount;cout<<"                                                                 |"
        cout<<"------------------------------------------------------------------------------"<<endl;
    if (balance > amount )
    {
        if (amount%5 == 0)
    {
        cout<<"Amount "<<amount<<" withdrawn!"<<endl;
        cout<<"Updated balance is: "<<(balance - amount - 0.5)<<endl;
    }
    else
    {
        cout<<"Amount is not a multiple of 5!"<<endl;
    }
    
    }
    else
    {
        cout<<"Balance not sufficient!"<<endl;
    }
    }
    else
    {
        cout<<"Invalid account number!"<<endl;
    }
    
    
    
    return 0;
    
    
    
    
}