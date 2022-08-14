#include<iostream>
using namespace std;

class Solution{
    public:
    void get_sum(int arr[], int n){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i]; 
        }

        if (sum%2 == 0)
        {
            sum = sum+2;
            cout<<"Sum is: "<<sum<<endl;
        }
        else{
            sum = sum+1;
            cout<<"Sum is: "<<sum<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.get_sum(arr,n);
    return 0;

    
}