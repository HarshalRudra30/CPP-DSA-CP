#include<iostream>
using namespace std;

int key_double(int arr[], int n, int key){
     for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            key = key*2;
            continue;
        }
    }
    return key;
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int store_value;
    int ans = key_double(arr, n, key);
    cout<<"Output: "<<ans<<endl;
    return 0;
}
