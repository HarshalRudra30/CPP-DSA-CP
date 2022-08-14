#include<iostream>
using namespace std;

int main(){
    int num[] = {56, 75, 22, 108, 85};
    int *ptr;
    cout<<"The Array values are: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<num[i]<<endl;
    }
    ptr = num;
    cout<<"Value of ptr: "<<*ptr<<endl;
    ptr++;
    cout<<"Value of ptr++: "<<*ptr<<endl;
    ptr--;
    cout<<"Value of ptr--: "<<*ptr<<endl;
    ptr = ptr+1;
    cout<<"Value of ptr+1: "<<*ptr<<endl;
    ptr = ptr-1;
    cout<<"Value of ptr-1: "<<*ptr<<endl;
    ptr += 5 ;
    cout<<"Value of ptr+=2: "<<*ptr<<endl;
    ptr -=1;
    cout<<"Value of ptr-=1: "<<*ptr<<endl;
    return 0;
    
}