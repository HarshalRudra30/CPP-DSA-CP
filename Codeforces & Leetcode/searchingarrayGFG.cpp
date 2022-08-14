#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element you want to search: ";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"Key found!"<<endl;
            cout<<"Index is: "<<i<<endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != key)
        {
            cout<<"Key not found!"<<endl;
            break;
        }
        
    }
    
    return 0;
    
    
}