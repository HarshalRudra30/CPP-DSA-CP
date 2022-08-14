#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int mx = INT16_MIN;
    int mn = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    cout<<"Maximum no. in array is: "<<endl;
    cout<<mx<<endl;
    cout<<"Minimum no. in array is: "<<endl;
    cout<<mn<<endl;
    return 0;
    
}