#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        int min = INT16_MAX;
        cin>>n;
        int arr[n];
        for(int i =0; i<n;i++){
            cin>>arr[i];
            if(arr[i]<min){
                min = arr[i];
            }
        }
        for(int i = 2; i<n;i++){
            if(arr[i]>=3 && arr[i] != min){
                arr[i-1] = arr[i]/3 + arr[i-1];
                arr[i-2] = arr[i]/3 + arr[i-2];
                arr[i] = arr[i] - (arr[i]/3+arr[i]/3); 
            }
        }
        int newmin = arr[0];
        for(int i = 0; i<n;i++){
            if(arr[i]<newmin){
                newmin = arr[i];
            }
        }
        cout<<newmin<<endl;
    }
    return 0;
}