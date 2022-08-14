#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        int sum =0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum == x){
            cout<<n<<endl;
        }
        else if(sum<x){
            cout<<"-1"<<endl;
        }
        else{
            sort(v.begin(),v.end(),greater<int>());
            int ans=0;
            int count=0;
            for(int i=0;i<n;i++){
                if(ans<x){
                    ans += v[i];
                    count++;
                }
            }
            cout<<count<<endl;
        }


    }
    return 0;
}

4
4 6
4 3 5 1
3 15
1 5 3
2 5
10 3
4 7
1 2 3 4
