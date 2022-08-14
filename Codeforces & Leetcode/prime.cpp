#include<iostream>
using namespace std;

int main(){
    int a,b,c = 0;
    cout<<"ENter any number: ";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        if (a%i == 0)
        {
            c++;
        }
    }
        if (c == 2)
        {
            cout<<"Prime  number"<<endl;
        }
        else
        {
            cout<<"Not a prime number";
        }
        

    
    return 0;
    
}