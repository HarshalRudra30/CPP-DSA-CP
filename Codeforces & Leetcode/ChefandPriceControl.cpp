#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n,k;
    while (t--)
    {
        cin>>n>>k;
        int arr[n];
        int loss = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i] >k){
                loss += arr[i]-k;
            }
        }
        cout<<loss<<endl;
    }
    
    return 0;
}