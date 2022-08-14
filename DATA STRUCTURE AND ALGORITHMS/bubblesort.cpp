#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int counter = 1;
    {
        for (int  i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        counter ++;
    }

    cout<<"Sorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
    
}