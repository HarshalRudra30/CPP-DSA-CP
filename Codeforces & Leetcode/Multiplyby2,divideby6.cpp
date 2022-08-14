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
        int count2=0;
        int count3=0;
        while(n>0){
            n = n/2;
            count2++;
        }
        while(n>0){
            n = n/3;
            count3++;
        }

        if(n==1 && count2<count3){
            cout<<2 * (count3-count2)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}