#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        int i = 0;
        while(i<n){
            int ct = count(arr.begin(), arr.end(),arr[i]);
            if(ct>=2){
                ans = ans+2;
            }
            if(ct == 1){
                ans = ans + 1;
            }
            i = i+ct;
        }
        int ct0 = count(arr.begin(), arr.end(), 0);
        int m = 0;
        if(ct0 > 1 ){
         m = ans - ct0 + 1;
        }
        else{
            m = ans;
        }
        cout<<m<<endl;
    }
    return 0;
}