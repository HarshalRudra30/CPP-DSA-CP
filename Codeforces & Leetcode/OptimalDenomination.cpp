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
        vector<int> v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v[n-1] = v[0];
        int ans = 0;
        for(int i = 0; i<n;i++){
            ans = ans + v[i]/v[0];
        }
        cout<<ans<<endl;
    }
    return 0;
}