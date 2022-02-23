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
    unsigned short s, w1, w2, w3;
    cin >> s >> w1 >> w2 >> w3;

    if (w1+w2+w3 <= s) cout << "1\n";
    else if (w1+w2 <= s or w2+w3 <= s) cout << "2\n";
    else cout << "3\n";
}