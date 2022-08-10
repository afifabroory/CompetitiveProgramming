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
    unsigned int x, y, m;
    cin >> x >> y >> m;

    if ((x*m) < y)
        cout << "YES\n";
    else
        cout << "NO\n";
}