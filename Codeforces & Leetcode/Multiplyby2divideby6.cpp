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
        cin >> n;
        int cnt2 = 0, cnt3 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            ++cnt2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            ++cnt3;
        }
        if (n == 1 && cnt2 <= cnt3)
        {
            cout << 2 * cnt3 - cnt2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}