#include<iostream>
#include<string>
using namespace std; 

class binary
{
    string s;
    public:
        void read(void);
        void onesCompliment(void);
        void bin_chk(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
} 

void binary :: bin_chk(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0'  &&  s.at(i) != '1')
        {
            cout<<"This is not a binary number!";
            exit(0);
        }
    }
}

void binary :: onesCompliment(void){
    bin_chk();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }        
    }
}

void binary :: display(void){
    cout<<"Displaying your binary number: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    //b.bin_chk();
    b.display();
    b.onesCompliment();
    b.display();
    return 0;
}