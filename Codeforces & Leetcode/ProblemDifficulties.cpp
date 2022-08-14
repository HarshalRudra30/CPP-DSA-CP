#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        sort(arr,arr+4);
        int count=0;
        for(int i=0;i<3;i++){
            if(arr[i] != arr[i+1]){
                count++;
            }
        }
        if(count == 3){
            cout<<"2"<<endl;
        }
        else if(count == 2 || count == 1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}