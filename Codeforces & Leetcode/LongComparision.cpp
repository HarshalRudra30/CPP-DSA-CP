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
        long long x1, x2;
        long long p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        int mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;
        if (p1 >= 7)
            cout << ">" << endl;
        else if (p2 >= 7)
            cout << "<" << endl;
        else
        {
            for (int i = 0; i < p1; ++i)
                x1 *= 10;
            for (int i = 0; i < p2; ++i)
                x2 *= 10;
            if (x1 < x2)
                cout << "<" << endl;
            else if (x1 > x2)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }
    timetaken;
    return 0;
}