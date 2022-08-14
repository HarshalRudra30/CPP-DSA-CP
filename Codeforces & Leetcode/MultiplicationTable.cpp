 /* Code by Harshal Rudra(harshal_3073)*/
 #include<bits/stdc++.h>
 #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
 #define rep(i,n) for(int i=0;i<n;i++)
 #define ll long long int
 #define all(x) (x).begin(), (x).end()
 #define pb push_back
 #define vll vector<ll>
 #define tt ll t; cin>>t; while(t--)
 #define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
 using namespace std;
 
 int main(){
 fast;
     int n,x;
     cin>>n>>x;
     vector<int> v;
     for(int i=1;i<n+1;i++){
        if(x%i==0){
            v.push_back(i);
        }
     }
     if(v.size()==0){
         cout<<0<<endl;
     }
     else{
     int count=0;
     for(int i=0;i<v.size();i++){
         for(int j=0;j<v.size();j++){
             if(v[i]*v[j] == x){
                count++;
             }
         }
     }
     cout<<count<<endl;
     }
     timetaken;
     return 0;
 }