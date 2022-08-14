#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    fast;
    string str;
    cin >> str;
    int flag = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
                flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}