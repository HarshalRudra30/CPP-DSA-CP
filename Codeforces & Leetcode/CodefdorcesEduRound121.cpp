#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int t;
    cin>>t;
    while(t--){
        long long  x;
        cin>>x;
        long long  n=x;
        vector<long long > v;
        while(n>=10){
            v.push_back(n%10);
            n/=10;
        }
        v.push_back(n);
        long long  s=v.size();
        reverse(v.begin(),v.end());
        if((v[s-1]+v[s-2])>=10){
            for (long long  i = 0; i < s; i++)
            {
                if(i==(s-2)){
                    cout<<v[s-1]+v[s-2]<<endl;
                    break;
                }
                else{
                    cout<<v[i];
                }
            }
        }
        else{
            int check=0;
            int m;
            if(s==2){
                cout<<v[0]+v[1]<<endl;
            }
            
            else{
            for (long long  i = s-2; i >=1; i--)
            {
                if((v[i]+v[i-1])>=10){
                    check=1;
                    m=i-1;
                    break;
                }
            }
            if(check==1){
            for (long long  i = 0; i < s; i++)
            {
                if(i==m){
                    cout<<v[i]+v[i+1];
                i++;
                }
                else{
                    cout<<v[i];
                }
            }
            cout<<endl;
            }
            else{
                for (long long  i = 0; i < s; i++)
                {
                    if(i==0){
                        cout<<v[0]+v[1];i++;
                    }
                    else{
                        cout<<v[i];
                    }
                }
                cout<<endl;
            }
            }
            
        }

    }
    return 0;
}