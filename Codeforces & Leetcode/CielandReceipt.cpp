#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int p;
    while(t--){
        cin>>p;
        int count = 0; 
        for(int i = 11; i>=0;i--){
            int currpow = pow(2,i);
            while(p>=currpow){
                p = p-currpow;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}