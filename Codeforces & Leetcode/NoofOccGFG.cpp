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
    int key;
    cin>>key;
    int count  = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            count++;
            found = true;
        }
    }
    if (found = true)
    {
    cout<<count<<endl;
    }
    if (found = false)
    {
        cout<<"Key not found!"<<endl;
    }
    
    
    return 0;
    
}