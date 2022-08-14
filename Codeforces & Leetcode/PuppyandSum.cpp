#include<iostream>
using namespace std;
 
int sum(int n){
    if(n ==0){
        return n;
    }
    return  n + sum(n-1);
}

int main(){
    int t;
    cin>>t;
    int d,n;
    while(t--){
        cin>>d>>n;
        while(d--){
            n = sum(n);
        }
        cout<<n<<endl;
    }
    return 0;
}