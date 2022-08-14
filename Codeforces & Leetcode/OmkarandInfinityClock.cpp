#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k > 1)
        {
            k = 2 + k % 2;
        }
        while (k--)
        {
            int mx = -1000000000;
            for (int i = 0; i < n; i++)
            {
                mx = max(mx, a[i]);
            }
            for (int i = 0; i < n; i++)
            {
                a[i] = mx - a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}