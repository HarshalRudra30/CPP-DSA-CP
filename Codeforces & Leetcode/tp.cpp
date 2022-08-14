#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b = 1;
    cout<<"Enter any number: ";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        b = b*i;
    }
    cout<<"Factorial is:"<<b<<endl; 
    return 0;
    
    
}

