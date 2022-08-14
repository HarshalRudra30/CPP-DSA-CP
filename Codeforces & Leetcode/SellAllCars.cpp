    #include<bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
    #define rep(i,n) for(int i=0;i<n;i++)
    using namespace std;
    #define MOD 1000000007

    int main(){
    fast;
        int t;
        cin>>t;
        int n;
        while(t--){
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int count = 0;
            for(int i=0;i<n;i++){
                if(arr[i]>0){
                    arr[i] = arr[i]-count;
                    count++;
                }
            }
            int sum = 0;
            for(int i=0;i<n;i++){
                sum += arr[i];
            }
            cout<<sum%MOD<<endl;    
        }
        return 0;
    }