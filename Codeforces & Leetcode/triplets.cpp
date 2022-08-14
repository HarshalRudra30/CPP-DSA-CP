#include<iostream>
using namespace std;

class Solution{
    public:
    bool findTriplets(int arr[], int n){
        bool found = false;
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == 0)
                    {
                        //cout<<arr[i]<<endl;
                        //cout<<arr[j]<<endl;
                        //cout<<arr[k]<<endl;
                        //cout<<"1"<<endl;
                        found = true;
                    }
                    
                }
                
            }
            
        }
        if (found = false)
        {
            cout<<"Not exists!"<<endl;
        }
        

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
    s.findTriplets(arr,n);
    return 0;
    
}