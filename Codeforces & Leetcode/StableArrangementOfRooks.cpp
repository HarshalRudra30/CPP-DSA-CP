#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void Solution(int n,int k){
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(i == j && i%2 == 0 && k>0){
                cout<<"R";
                k--;        
            }
            else{cout<<".";}
        }
        cout<<endl;
    }
}

int main(){
fast;
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        int check;
        if(n%2==0){
            check = n/2;
        }
        else{
            check = (n+1)/2;
        }
        if(check<k){
            cout<<-1<<endl;
        }
        else{
            Solution(n,k);
        }
    }
    return 0;
}