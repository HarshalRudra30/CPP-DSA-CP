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
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i = 0; i<n;i++){
            cin>>v1[i];
        }
        for(int i = 0; i<n;i++){
            cin>>v2[i];
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0;
        for(int i = 0; i<n;i++){
            ans += (v1[i]*v2[n-i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}