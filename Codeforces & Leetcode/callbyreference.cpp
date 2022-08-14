#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
     int x = 4, y= 5;
    cout<<"Value of x before swapping : "<<x<<" Values of y before swapping: "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"Value of x after swapping: "<<x<<" Value of y after swapping: "<<y;
    return 0;
}

// Return Reference method:
//int  &swapReferenceVar(int &a, int &b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//    return a;
//}
//int main()
//{
//     int x = 4, y= 5;
//    cout<<"Value of x before swapping : "<<x<<" Values of y before swapping: "<<y<<endl;
//    swapReferenceVar(x,y) = 456;
//    cout<<"Value of x after swapping: "<<x<<" Value of y after swapping: "<<y;
//    return 0;
//}