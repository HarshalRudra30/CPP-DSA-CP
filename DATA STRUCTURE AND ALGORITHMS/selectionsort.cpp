#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"Array after sorting is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    



    
     
}