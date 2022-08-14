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
        int arr[n][3];
        for(int i =0; i<n;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
        int sum =0;
        int cost = arr[0][2];
        cout<<cost<<endl;
        int ans[n];
        for(int i=1;i<n;i++){
            int minsum = 0;
            for(int j=0;j<2;j++){
                minsum += arr[i][j];
            }   
            if(minsum>sum){
                cost += arr[i][2];
            }
            else{
                sum = minsum;
                cost = arr[i][2];
            }
             cout<<cost<<endl;
        }
    }
    return 0;
}