#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum = sum + v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int count=0;
    int sum2=0;
    int max = sum/2;
    for(int i=0;i<n;i++){
        sum2 = sum2+v[i];
        count++;
        if(sum2>max){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}