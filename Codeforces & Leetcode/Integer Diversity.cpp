#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i = n-1; i>=0;i--){
            for(int j = 0; j<n;j++){
                if(arr[i] == arr[j] && i!=j){
                    arr[i] = 0-arr[i];
                }
            }
        }
        int count = 0;
        for(int i =0; i<n;i++){
            for(int j = 0; j<n;j++)
            if(arr[i] != arr[j  &&  i!=j]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}