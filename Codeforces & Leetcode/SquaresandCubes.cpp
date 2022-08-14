#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=sqrt(n);
        int c=cbrt(n);
        int i=sqrt(cbrt(n));
        cout<<s+c-i<<endl;
    }
    return 0;
}