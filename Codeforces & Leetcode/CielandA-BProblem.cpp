#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int d = abs(a-b);
    if(d%9 == 0){
        d = d-1;
    }
    else{
        d = d+1;
    }
    return 0;
}