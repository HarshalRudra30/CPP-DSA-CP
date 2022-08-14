#include<iostream>
using namespace std;

int main(){
    int mx = INT16_MIN;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<"Max at this point is: "<<mx<<endl;
    }
    return 0;
    
    
}