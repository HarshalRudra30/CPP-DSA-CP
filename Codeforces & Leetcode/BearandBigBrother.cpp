#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int a,b;
    cin>>a>>b;
    int count =0;
    while(true){
        if(a <=b){
        count++;
        a = a*3;
        b = b*2;
        }
        else{
            break;
        }
        
    }
    cout<<count<<endl;
    return 0;
}