#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n;
    cin>>n;
    int steps = 0;
    while(n!=0){
        if(n>=5){
            n = n-5;
            steps++;
        }
        else if(n == 4){
            n = n-4;
            steps++;
        }
        else if( n== 3){
            n = n-3;
            steps++;
        }
        else if(n==2){
            n= n-2;
            steps++;
        }
        else if(n==1){
            n = n-1;
            steps++;
        }
    }
    cout<<steps<<endl;

    return 0;
}