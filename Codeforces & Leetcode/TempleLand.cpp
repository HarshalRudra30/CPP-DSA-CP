#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int s;
    cin>>s;
    int n;
    while(s--){
        cin>>n;
        int arr[n];
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        if(n%2 == 0){
            cout<<"No"<<endl;
        }
        else{
        int count = 0;
        for(int i = 0; i<(n/2)-1;i++){
            if(arr[i+1]-arr[i] !=1 || arr[i] != arr[n-i-1] || arr[0] != 1){
                count ++;
            }
        }
        /*for(int i =n/2;i<n-1;i++){
            if(arr[i] - arr[i+1] != 1){
                count++;
            }
        }
        if(arr[(n/2)-1] != arr[(n/2)+1]){
            count++;
        }
        if(arr[0] != 1){
            count++;
        }
        */
        if(count == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }

    }
    return 0;
}