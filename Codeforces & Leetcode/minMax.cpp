#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = INT16_MAX;
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        else if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min<<endl;
    return 0;
    

     
    
}