/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(long long i=0;i<n;i++)
#define ll long long
using namespace std;

int main(){
fast;
    long long m,n;
    cin>>m>>n;
    vector<long long>v(n);
    rep(i,n) cin>>v[i];
    long long time=v[0]-1;
    long long ans=0;
    for(long long i =1;i<n;i++){
        if(v[i]>v[i-1]){
            time += v[i] - v[i-1];
        }
        else if(v[i]<v[i-1]){
            time += (m-v[i-1])+(v[i]-1) + 1;
        }
        else if(v[i] == v[i-1]){
            time+=0;
        }
    }
    cout<<time<<endl;
    return 0;
}