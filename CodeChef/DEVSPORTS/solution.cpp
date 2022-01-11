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
    unsigned z, y, a, b, c;
    cin >> z >> y >> a >> b >> c;
    z -= y;
    if (a+b+c > z) cout << "NO\n";
    else cout << "YES\n";
}