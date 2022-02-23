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
    unsigned short n, x, max, tmp;
    cin >> n >> x;
    max = x;

    while (n--) {
        cin >> tmp; x += tmp;
        if (max < x) max = x;
    }
    cout << max << '\n';
}