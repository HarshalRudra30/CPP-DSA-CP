#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        int sum1 = a1+b1+c1;
        int sum2 = a2+b2+c2;
        if(sum1>sum2){
            cout<<"DRAGON"<<endl;
        }
        else if(sum2>sum1){
            cout<<"SLOTH"<<endl;
        }
        else if(sum1 == sum2){
            if(a1>a2){
                cout<<"DRAGON"<<endl;
            }
            else if(a2>a1){
                cout<<"SLOTH"<<endl;
            }
            else if(a1==a2 && b1>b2){
                cout<<"DRAGON"<<endl;
            }
            else if(a1==a2 && b1<b2){
                cout<<"SLOTH"<<endl;
            }
            else if(a1==a2 && b1==b2){
                cout<<"TIE"<<endl;
            }
        }
    }
    return 0;
}

