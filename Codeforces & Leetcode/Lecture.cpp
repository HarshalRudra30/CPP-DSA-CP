/* Code by Harshal Rudra(harshal_3073)*/
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define scanit                  \
    for (int i = 0; i < n; i++) \
    cin >> v[i]
#define vll vector<ll>
#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)
using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 7;
vll dp(N);
int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    vector<string> x;
    vector<string> y;
    rep(i, m)
    {
        string s, a;
        cin >> s;
        cin >> a;
        x.pb(s);
        y.pb(a);
    }
    vector<string> fin;
    rep(i, n)
    {
        string s;
        cin >> s;
        fin.pb(s);
    }
    rep(i, n)
    {
        string s = fin[i];
        rep(j, m)
        {
            if (s == x[j])
            {
                if (x[j].size() > y[j].size())
                {
                    cout << y[j] << " ";
                }
                else
                    cout << x[j] << " ";
                break;
            }
        }
    }
    return 0;
}