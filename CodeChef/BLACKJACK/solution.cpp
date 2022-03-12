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
    unsigned short a, b, c;
    cin >> a >> b;
    
    c = 21 - (a + b);

    if (c <= 10) cout << c << '\n';
    else cout << "-1\n";
}