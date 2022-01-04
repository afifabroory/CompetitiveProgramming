#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int dist = abs(c-a) + abs(d-b); // Manhattan distance
    if (dist <= k && k%2 == dist%2) cout << "YES\n";
    else cout << "NO\n";
}