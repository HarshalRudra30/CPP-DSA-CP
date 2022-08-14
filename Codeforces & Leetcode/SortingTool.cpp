#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> a(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    int min = 0;
    int ct =0;
    for (int i = 0; i < n; i++)
    {
        ct = count(v.begin(), v.end(), v[i]);
        if(ct>min){
            min = ct;
            for(int j = 0; j<ct;j++){
            a.push_back(i);
            }
        }
    }
    for(int i = 0; i<n;i++){
    cout<<a[i];
    }
    return 0;
}