#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Hello";
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements  are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}