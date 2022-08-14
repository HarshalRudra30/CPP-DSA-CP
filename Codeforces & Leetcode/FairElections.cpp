#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        long long john[n];
        long long jack[m];
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n;i++){
            cin>>john[i];
            sum1 += john[i];
        }
        for(int i=0;i<m;i++){
            cin>>jack[i];
            sum2 += jack[i];
        }
        sort(john,john+n);
        sort(jack,jack+m);
        int count = 0;
        for(int i = 0; i<n;i++){
            if(sum1<=sum2){
                if(john[i] < jack[m-1-i])
                count++;
                sum1 = sum1 - john[i];
                sum1 = sum1 + jack[m-i-1];
                sum2 = sum2 - jack[m-i-1];
                sum2 = sum2 + john[i];
            }
        }
        if(sum1 == sum2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count<<endl;
        }

    }
    return 0;
}