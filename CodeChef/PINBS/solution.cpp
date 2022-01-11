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
    string s; cin >> s;

    // Find counterexample
    if (s.length() == 1 or regex_match(s, regex("^0+$")) or regex_match(s, regex("^0+1$"))) cout << "NO\n";
    else cout << "YES\n";
}