#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<n<<endl;
        }
        else if(n%2 == 0){
            cout<<"2"<<endl;
        }
        else if(n%3 == 0){
            cout<<"3"<<endl;
        }
        else if(n%5 == 0){
            cout<<"5"<<endl;
        }
        else if(n%7 == 0){
            cout<<"7"<<endl;
        }
    }
    return 0;
}