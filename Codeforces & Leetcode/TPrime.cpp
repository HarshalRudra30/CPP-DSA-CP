/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(long long i=0;i<n;i++)
#define ll long long
using namespace std;
void prime(long long a){
    if(a==2){cout<<"YES"<<endl;return;}
    for (long long i = 2; i*i <= a; i++)
            {
                if(a%i==0){cout<<"NO"<<endl;return;}
            }
            cout<<"YES"<<endl;return;
}

int main(){
fast;
    long long n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        long long x,y;
        x = ceil(sqrtf(a));
        y = float(sqrtf(a));
        if(a==1){
            cout<<"NO"<<endl;
        }
        else if(x==y){
            prime(x);
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}