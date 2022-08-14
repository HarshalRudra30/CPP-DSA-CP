#include<iostream>
using namespace std;
int power(int n, int p){
    if (p == 0)
    {
        return 1;
    }
    
    int prevPower = power(n,p-1);
    return n*prevPower;
}

int main(){
    int n,p;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>p;
    cout<<n<<" raised to power "<<p<<" is: "<<power(n,p)<<endl;
    return 0;

}