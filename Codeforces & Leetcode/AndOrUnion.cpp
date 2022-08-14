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
        for(int i =0; i<n;i++){
            cin>>arr[i];
        }
        vector<int> b;
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                b.push_back(arr[i]&arr[j]);
            }
        }
        int y=b[0]|b[1];
        for(int i=2;i<b.size();i++){
            y = y|b[i];
        }
        cout<<y<<endl;
    }
    return 0;       
}