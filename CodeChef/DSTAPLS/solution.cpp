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
    long n, k;
    cin >> n >> k;

    long total_minute = n/k;    // Total minute to distribute all apple.

    if (total_minute%k) cout << "YES\n";
    else cout << "NO\n";
}