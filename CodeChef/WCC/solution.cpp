#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned X;
    unsigned C = 0, N = 0;

    cin >> X;
    for (unsigned i = 0; i < 14; i++) {
        char tmp;
        cin >> tmp;

        if (tmp == 'C')
            C += 2;
        else if (tmp == 'N')
            N += 2;
        else {
            C += 1;
            N += 1;
        }
    }

    if (C > N)
        cout << 60 * X << '\n';
    else if (C < N)
        cout << 40 * X << '\n';
    else
        cout << 55 * X << '\n';
}