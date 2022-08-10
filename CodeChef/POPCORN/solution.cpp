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
    unsigned int a1, a2;
    unsigned int b1, b2;
    unsigned int c1, c2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    cout << max(a1+a2, max(b1 + b2, c1 + c2)) << '\n';
}