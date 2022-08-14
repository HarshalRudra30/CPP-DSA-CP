#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int min = arr[0];
        for(int i = 0; i<n;i++){
            if(arr[i]<= min){
                count++;
                min = arr[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}