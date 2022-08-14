#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int min = 100000;
        for(int i = 0; i<n; i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        cout<<min;
        int sum;
        for(int i = 0; i<n; i++){
            if(arr[i] != min){
                sum = sum + arr[i];
            }
        }
        cout<<sum<<endl;
    }
}