#include<iostream>
using namespace std;

int main(){
    int t, n,arr[100000];
    cin>>t;
    while (t--){
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    }
    
    for(int i = 0; i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    int min = arr[1] - arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] - arr[i-1] < min){
            min = arr[i] - arr[i-1];
        }
    }
    
}