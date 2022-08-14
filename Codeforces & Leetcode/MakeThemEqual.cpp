/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define scanit for(int i=0;i<n;i++) cin>>v[i]
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        vector<int> occ(n + 1);
        int req = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != ch){
                occ[i + 1] = 1;
                req++;
            }
        }
        bool found = false;
        if(req == 0){
            cout << 0 << endl;
            continue;
        }
        for(int i = 2; i <= n; i++){
            int taken = req;
            for(int j = i; j <= n; j += i){
                taken -= occ[j];
            }
            if(taken == req){
                cout << 1 << endl;
                cout << i << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }
    return 0;
}