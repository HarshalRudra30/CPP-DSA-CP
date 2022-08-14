/* Code by Harshal Rudra(harshal_3073)*/
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)
#define timetaken                      \
    cerr << fixed << setprecision(10); \
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl
using namespace std;
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int pw = 2; pw < 30; ++pw)
        {
            int val = (1 << pw) - 1;
            if (n % val == 0)
            {
                cerr << val << endl;
                cout << n / val << endl;
                break;
            }
        }
    }
    timetaken;
    return 0;
}