/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    int m,s;
    cin>>m>>s;
    if(s==0){
        if(m==1) cout<<"0 0"<<endl;
        else cout<<"-1 -1"<<endl;
    }
    else{
        string maxx="";
        string minn="";
        for(int i=0;i<m;i++){
            int k = min(9,s);
            maxx.push_back('0'+k);
            s-=k;
        }
        //cout<<maxx<<endl;
        if(s>0) {cout<<"-1 -1"<<endl;} //return 0;}
        else{
            for(int i = m-1;i>=0;i--){
                minn.push_back(maxx[i]);
            }
            int j=0;
            while(minn[j]=='0')
                j++;
                minn[0]++;
                minn[j]--;
            cout<<minn<<" "<<maxx<<endl;
        }

    }
    return 0;
}