#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (i == sqrt(n) && n%i == 0)
        {
            cout<<"Not prime!"<<endl;
            break;
        }
    }
    else
    {
        cout<<"Prime!"<<endl;
    }
    
    return 0;
    
}