#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        min = max(min, arr[i]);
    }
    cout<<min<<endl;
    return 0;
    
}