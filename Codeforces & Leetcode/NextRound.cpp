#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int min = arr[k-1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=min && arr[i] != 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
    
}