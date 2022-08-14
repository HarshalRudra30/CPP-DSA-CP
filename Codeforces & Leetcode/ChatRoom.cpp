#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    string a;
    cin>>a;
    int n = a.length();
    int l =0;
    for (int i=0;i<n;i++)

      {

            if (a[i]=='h' && l==0) l++;

            else if (a[i]=='e' && l==1) l++;

            else if (a[i]=='l' && l==2) l++;

            else if (a[i]=='l' && l==3) l++;

            else if (a[i]=='o' && l==4) l++;

            if (l==5) break;

      }
      if(l==5){
          cout<<"Yes"<<endl;
      }
      else{
          cout<<"No"<<endl;
      }
    return 0;
}