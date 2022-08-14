#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> n;
    }

    cout<<"Reversed array is: "<<endl;
    for (int i = n-1; i >=0; i--)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
    
     
    
}