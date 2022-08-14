    #include<bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
    #define rep(i,n) for(int i=0;i<n;i++)
    using namespace std;

    int main(){
    fast;
        long long t;
        cin>>t;
        int a,b;
        while(t--){
            cin>>a>>b;
            int ans = min(min(a,b), (a+b)/4);
            cout<<ans<<endl;
        }
        return 0;
    }