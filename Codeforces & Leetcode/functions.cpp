#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int num1 , num2;
    cout<<"Enter value for num1: "<<endl;
    cin>>num1;
    cout<<"Enter value for num1: "<<endl;
    cin>>num2;
    cout<<"Sum of these numbers is: "<<sum(num1, num2)<<endl;
    return 0;
}