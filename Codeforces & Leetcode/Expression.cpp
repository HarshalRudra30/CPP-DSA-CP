#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int a,b,c;
    cin>>a>>b>>c;
    int maxx =0;
    maxx = max(maxx,a*b*c);
    maxx = max(maxx, (a+b)*c);
    maxx = max(maxx,a*(b+c));
    maxx = max(maxx,a+c+b);
    cout<<maxx<<endl; 
    return 0;
}