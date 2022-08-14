#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(int arr[], int maxx){
    for(int i=0;i<7;i++){
            for(int j=i+1;j<7;j++){
                for(int k=i+2;k<7;k++){
                    if(arr[i]+arr[j]+arr[k] == maxx){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        return;
                    }
                }
            }
        }
}
int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        int maxx = arr[6];
        solve(arr,maxx);
    }
    return 0;
}