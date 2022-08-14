#include<iostream>
using namespace std;

int main()
{
    int a;
    int i=0;
    cout<<"This program prints numbers till a"<<endl;
    cout<<"Enter value for a: ";
    cin>>a;
    /*for (int i = 0; i < a; i++)
    {
        cout<<i<<endl;
    }*/
    //Printing the same by using while loop now
    while (i<a)
    {
        cout<<i<<endl;
        i++;
    }
    

    return 0;
    
}