#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short time;
    cin >> time;

    if (time >= 1 && time <= 4) cout << "YES\n";
    else cout << "NO\n";
}