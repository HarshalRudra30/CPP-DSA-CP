#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n-2;i++){
            arr[i] = 0;
            arr[i+1] = 1;
            arr[i+2] = 2;
        }

        for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}