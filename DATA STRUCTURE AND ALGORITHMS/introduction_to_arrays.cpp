#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of arrays: "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter elements for array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Your arry is: "<<endl; 
    for (int i = 0; i < n; i++)
    {
        /* code */
    cout<<array[i]<<" ";
    }
    
    
}