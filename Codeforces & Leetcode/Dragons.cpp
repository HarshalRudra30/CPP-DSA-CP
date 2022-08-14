/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
string solve(int s,int n,vector<pair<int,int>> v){
    for(int i=0;i<n;i++){
        int x = v[i].first;
        int y = v[i].second;
        if(s>x){
            s = s+y;
        }
        else{
            return "NO";
        }
    }
    return "YES";
}
int main(){
fast;
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    string ans = solve(s,n,v);
    cout<<ans<<endl;

    return 0;
}