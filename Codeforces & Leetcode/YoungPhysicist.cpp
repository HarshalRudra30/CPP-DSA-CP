#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n;
 cin>>n;
     int s1=0, s2=0, s3=0;
 for(int i = 0; i<n; i++){
     int a, b, c;
     cin>>a>>b>>c;
     s1+=a, s2+=b, s3+=c;
 }
 if(s1==0 && s2==0 && s3==0){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
    return 0;
}