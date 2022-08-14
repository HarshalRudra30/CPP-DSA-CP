#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    while(n--){
        cin>>t;
        int arr[t];
        int sum = 0;
        for(int i = 0; i<t;i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }

        if(sum%t == 0){
            cout<<"0"<<endl;
        } 
        else
        {
            cout<<"1"<<endl;
        }
    }
    return 0;
}