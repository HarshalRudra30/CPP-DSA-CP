#include<iostream>
using namespace std;
 
 int main(){
    int t;
    cin>>t;
    int n;
    int k;
    while(t--){
        
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i<n; i++ ){
            cin>>arr[i];
        }
        int count = 0;
        for(int i = 0; i<n;i++){
            if(arr[i]>k){
                count++;
            }
        }
        cout<<count<<endl;
    }
 }