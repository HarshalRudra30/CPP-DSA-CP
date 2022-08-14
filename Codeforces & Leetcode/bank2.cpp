#include<iostream>
using namespace std;

class Bank{
    int acc,bal,depo,with;
    char name[100], type[20];
    public:
    int getData();
    int deposit();
    int withdraw();
    void display();
};

int Bank ::getData(){
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter type of account: "<<endl;
    cin>>type;
    cout<<"Enter your account number: "<<endl;
    cin>>acc;
    cout<<"Enter your account balance: "<<endl;
    cin>>bal;
    cout<<endl;
}

int Bank ::deposit(){
    cout<<"Enter value you want to deposit: ";
    cin>>depo;
    bal = depo + bal;
    cout<<"updated balance: "<<bal;   
}

int Bank ::withdraw(){
    cout<<"Enter value you want to withdraw: ";
    cin>>with;
    if (with>bal)
    {
        cout<<"Balance is not sufficient!"<<endl;
    }
    else
    {
    bal = bal - with;
    cout<<"updated balance: "<<bal;
    }
}
 int main(){
     Bank b;
     char x;
     b.getData();
    cout<<"Do you want to deposit or withdraw? For "<<endl;
    cin>>x;
    if (x =='d' || x == 'D')
    {
        b.deposit();
    }
    else if(x == 'w' || x == 'W')
    {
        b.withdraw();
    }
    else{
        cout<<"Select proper action!";
    }
     return 0;
 }
