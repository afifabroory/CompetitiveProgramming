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
    float s, a, b, c;
    cin >> s >> a >> b >> c;

    float price = s * (abs(c)/100);
    if (c < 0) price = s - price;
    else price = s + price;

    if (a <= price && price <= b) cout << "YES\n";
    else cout << "NO\n";
}