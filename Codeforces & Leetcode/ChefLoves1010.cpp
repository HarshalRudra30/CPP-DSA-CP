#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        char s[n];
        cin>>s;
        int count1 = 0;
        int count0 = 0;
        for(int i = 0;  i< n; i++){
            if(s[i] == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count0 <2 || count1 <2){
            cout<<"0"<<endl;
            
        }
        else if(count1<count0){
            cout<<count1-1<<endl;
        }
        else{
            cout<<count0-1<<endl;
        }
    }
    return 0;
}