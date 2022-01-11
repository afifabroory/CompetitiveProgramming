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
    string str, sstr;
    cin >> str;
    bool flag = true;
    for (unsigned i = 1; i < str.length() && flag; i++) {
        if (str[i-1] > str[i]) flag = false;
    }

    cout << (flag ? "yes" : "no") << '\n';
}