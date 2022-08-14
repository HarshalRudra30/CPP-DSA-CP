#include<iostream>
using namespace std;

class Solution{
    public:
    int balanced(int arr[], int n){
        int mid = n/2;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i <mid ; i++)
        {
            sum1 += arr[i]; 
        }
        for (int i = mid ; i < n; i++)
        {
            sum2 += arr[i];
        }
        cout<<"Sum1: "<<sum1<<endl;
        cout<<"Sum2: "<<sum2<<endl;
        int difference;
        if (sum1>sum2)
        {
            difference = sum1-sum2;
        }
        else
        {
            difference = sum2 - sum1;
        }
        cout<<"Difference: "<<difference<<endl;
    }
};

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
    Solution s;
    s.balanced(arr,n);
    return 0;
}