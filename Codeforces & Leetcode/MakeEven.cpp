#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int main(){
fast;
    int t;
    cin>>t;
    long long int n;
    while(t--){
        cin>>n;
        if(n%2 == 0){
            cout<<"0"<<endl;
        }
        else{
            int reverse = reversDigits(n);
            if(reverse%2==0){
                cout<<"1"<<endl;
            }
            else{
                int count =0;
                while(n>0){
                    int rem = n%10;
                    if(rem%2==0){
                        count++;
                    }
                    n = n/10;
                }
                if(count>0){
                    cout<<"2"<<endl;
                }
                else{
                    cout<<"-1"<<endl;
                }
            }
        }
    }
    return 0;
}