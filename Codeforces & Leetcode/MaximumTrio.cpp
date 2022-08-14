#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }

        int max1 = arr[0];
        int max2 = arr[1];
        int min = arr[n-1];
        for(int i = 0; i<n;i++){
            if(arr[i]>max1){
                max1 = arr[i];
            }
            if(arr[i]>max2 && max1 != arr[i]){
                max2 = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }

        int ans = (max1-min)*max2;
        cout<<ans<<endl;
    }
}