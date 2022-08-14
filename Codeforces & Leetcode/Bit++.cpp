#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int X = 0;
    char op[4];
    while (t--)
    {
        cin>>op;
        if(op[1] == '+'){
            X++;
        }
        else{
            X--;
        }
    }
    cout<<X<<endl;
    return 0;
    
}