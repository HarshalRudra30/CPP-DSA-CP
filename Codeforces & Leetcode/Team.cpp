#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[3];
    int count = 0;
    while(t--){
        int count1 = 0;
        int count0 = 0; 
        for(int i = 0; i<3;i++){
            cin>>arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if(arr[i] == 1){
                count1++;
            }
            else{
                count0 ++;
            }
        }
        if(count1>count0){
            count++;
        }
        else{
            continue;
        }
        
    }
    cout<<count<<endl;
}