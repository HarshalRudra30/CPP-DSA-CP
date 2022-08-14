#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
fast;
    int a, b;
    cin >> a >> b;

    if (a >= b)
    {
        a -= b;
        a /= 2;
        cout << b << ' ' << a << endl;
    }
    else
    {
        b -= a;
        b /= 2;
        cout << a << ' ' << b << endl;
    }

    return 0;
}