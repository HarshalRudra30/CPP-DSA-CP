#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxNo = INT16_MIN;
    int minNo = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<"Max no. is: "<<maxNo<<endl;
    cout<<"Min no is: "<<minNo<<endl;
    

    

}