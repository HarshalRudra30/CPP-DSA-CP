#include<iostream>
using namespace std;

// This method uses Pointer method :)
void swapPointer( int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 4, y= 5;
    cout<<"Value of x before swapping : "<<x<<" Values of y before swapping: "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"Value of x after swapping: "<<x<<" Value of y after swapping: "<<y;
    return 0;
}

