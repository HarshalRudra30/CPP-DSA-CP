#include<iostream>
using namespace std;

int  main()
{
    int Marks[4];
      Marks[0] = 45;
    Marks[1] = 85;
    Marks[2] = 55;
    Marks[3] = 75;
    cout<<"These are the marks: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Marks of "<<i<<" are: "<<Marks[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    int* p = Marks;
    cout<<"The value of Marks[0] is: "<<*p<<endl;
    cout<<"The value of Marks[1] is: "<<*(p+1)<<endl;
    cout<<"The value of Marks[2] is: "<<*(p+2)<<endl;
    cout<<"The value of Marks[3] is: "<<*(p+3)<<endl;
    return 0;
    
}