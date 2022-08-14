/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main(){
fast;
     int a, b, d, m;
    cin >> a >> b;
    int h = a;

    while(a >= b)
    {
        d = a / b;
        h += d;
        m = a % b;
        a = d + m;
    }

    cout << h << endl;
}