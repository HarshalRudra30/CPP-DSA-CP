#include<iostream>
using namespace std;

int main(){
    int a , *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"The addresss of a: "<<ptr1<<endl;
    cout<<"The address of ptr1: "<<ptr2<<endl;
    cout<<endl;
    cout<<"Value after incrementing is: "<<endl;
    ptr1 += 2;
    cout<<"The address of a: "<<ptr1<<endl;
    ptr2 += 2;
    cout<<"The address of ptr1 is: "<<ptr2<<endl;
    return 0;
    

}