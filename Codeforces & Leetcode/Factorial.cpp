#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long int n;
    while(t--){
        cin >> n;
        int ans = 0;
        while(n>=5){
            ans = ans + n/5;
            n = n/5;
        }
        cout<<ans<<endl;
    }
    return 0;
}