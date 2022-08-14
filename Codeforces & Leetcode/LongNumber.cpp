/* Code by Harshal Rudra(harshal_3073)*/
#include <bits/stdc++.h>
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define scanit                \
  for (int i = 0; i < n; i++) \
  cin >> v[i]
#define vll vector<ll>
#define tt  \
  ll t;     \
  cin >> t; \
  while (t--)
using namespace std;
const int N = 1e5 + 2, MOD = 1e9 + 7;
int main()
{
  fast;
  vll f(10);
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 1; i <= 9; i++)
    cin >> f[i];
  vector<int> diff;
  for (int i = 0; i < n; i++)
    diff.push_back(f[s[i] - '0'] - (s[i] - '0'));
  for (int i = 0; i < n; i++)
    if (diff[i] > 0)
    {
      while (i < n && diff[i] >= 0)
      {
        s[i] = char(f[s[i] - '0'] + '0');
        i++;
      }
      break;
    }
  cout << s << endl;
  return 0;
}