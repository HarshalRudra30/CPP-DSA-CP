#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, b, g, a, i, n, q, m;
    cin >> t;
    for (b = 0; b < t; b++) {
        cin >> g;
        for (a = 0; a < g; a++) {
            cin >> i;
            cin >> n;
            cin >> q;
            m = n/2;
            if (n%2 == 0) {
                cout << m << "\n";
            } else {
                if (i == 1) {
                    if (q == 1) {
                        cout << m << "\n";
                    } else {
                        cout << m+1 << "\n";
                    }
                } else {
                    if (q == 1) {
                        cout << m+1 << "\n";
                    } else {
                        cout << m << "\n";
                    }
                }
            }
        }
    }
    return 0;
}