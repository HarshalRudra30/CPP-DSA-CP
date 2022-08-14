#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> v;
        if(n==1){
            cout<<x<<endl;

        }
        else if(x!=1){
            v.push_back(1);
            x=x^1;
            for (int j = 0; j < n; j++)
            {
                v.push_back(x+1);
                x=(x+1)^x;
            }
            v[n-1]=v[n-1]-1;
            rep(i,n) cout<<v[i]<<" ";
            cout<<endl;
        }
        else{
            v.push_back(2);
            x=x^2;
            for (int j = 0; j < n; j++)
            {
                v.push_back(x+1);
                x=(x+1)^x;
            }
            v[n-1]=v[n-1]-1;
            rep(i,n) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}