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
    unsigned int n, x;
    cin >> n >> x;

    unsigned int destroyed = 0;
    for (unsigned i = 0; i < n; i++) {
        unsigned int tmp;
        cin >> tmp;

        if (tmp < x)
            destroyed = i + 1;
    }

    cout << destroyed << '\n';
}