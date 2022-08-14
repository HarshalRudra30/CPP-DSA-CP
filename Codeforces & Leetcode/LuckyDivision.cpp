#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n;
    cin>>n;
    bool flag = false;
    int arr[12] = {4,7,44,47,74,444,447,474,744,747,477,777};
    for(int i=0;i<12;i++){
        if((n%arr[i]) == 0){
            flag = true;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
int main(){
fast;
    int n;
    cin>>n;
    bool flag=0;
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    for(int i=0;i<12;i++){
	    if(n%arr[i]==0){
		    flag=true;
	    }
    }
    if(flag)
        cout<<"YES";
    else
	    cout<<"NO";
    return 0;
}