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
    string s; cin >> s;
    unsigned short a = 0, b = 0;
    for (unsigned i = 0; i < s.size(); i++) {
        if (s[i] == 'a') a++;
        else b++;
    }
    cout << min(a, b) << '\n';
}