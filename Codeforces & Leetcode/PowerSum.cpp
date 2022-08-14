#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int FindMin(vector<pair<int,int>> c, int n){
    int minn = INT_MAX;
    for(int i=0;i<n;i++){
        if(c[i].first <= minn){
            minn = c[i].first;
        }
    }
    return minn;
}

void solve(vector<pair<int,int>> c){
    int cnt=0;
    
    for (int i = 1; i < c.size(); i++)
    {   
        if((c[i+1].first-c[i].first)>1){
            cnt++;
        }
    }
    if(c[0].first==c[1].first){cout<<cnt<<endl;} 
    else cout<<cnt+1<<endl; //3
    
}     

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
fast;
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;int sum=0;
        vector<int> v;
        rep(i,n){int a;cin>>a;sum+=a;v.push_back(a);} //8 8 8 32
        if(isPowerOfTwo(sum)){
            cout<<0<<endl;
        }
        else{
            
            vector<pair<int,int>> c;
            for (int i = 0; i < n; i++)
            {
                int x=log2f(v[i]);
                c.push_back(make_pair(x,i+1)); // 3 3 3 5
            }
            sort(c.begin(),c.end());
            
            if(n>2){
                solve(c);
                int x = FindMin(c,n);
                for (int i = n-2; i >=0; i--)
                {
                    if(c[i].first == x){
                        int d = c[i+1].first - c[i].first;
                        cout<<i<<" "<<pow(2,d)<<endl;
                        for(int j=0;j<=i;j++){
                            cout<<j+1<<" ";
                        } 
                        cout<<endl;
                        break;
                    }
                    if(i==0&&(c[1].first!=c[0].first)){
                        int l=c[1].first-c[0].first;
                        cout<<1<<" "<<pow(2,l)<<endl;
                        cout<<c[0].second<<endl;
                    }
                    else if(c[i+1].first-c[i].first>1){ 
                        int l=c[i+1].first-c[i].first-1;  
                        cout<<i+1<<" "<<pow(2,l)<<endl;  
                        for (int j = 0; j <= i; j++)
                        {
                            c[j].first+=l;
                            cout<<c[j].second<<" ";
                        }
                        cout<<endl;
                    }
                    x = FindMin(c,n);
                    
                    
                }
                
            }
            else if(n==2){
                if(c[1].first-c[0].first!=0){
                cout<<1<<endl;
                int l=c[1].first-c[0].first;
                cout<<1<<" "<<pow(2,l)<<endl;
                cout<<c[0].second<<endl;}
            }

            
        }
    }
    return 0;
}

