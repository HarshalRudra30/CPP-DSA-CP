#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a ;
    int b ;
    cout<<"Enter values for a and b: "<<endl;
    cin>>a>>b;

    cout<<"Value before swapping: "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Value after swapping: "<<a<<" "<<b<<endl;
    return 0;
}