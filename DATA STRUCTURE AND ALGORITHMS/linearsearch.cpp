#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"Key found!"<<endl;
            cout<<"Index is: ";
            return i;
        }
    }
    return -1;
    

}

int main(){
    int n;
    cout<<"ENter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key you want to search: "<<endl;
    cin>>key;
    cout<<linearsearch(arr, n, key);
    return 0;


    
    
}