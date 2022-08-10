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
    unsigned short a, b;
    cin >> a >> b;

    unsigned short sum = a + b;
    if (sum > 60)
        cout << "4\n";
    else if (sum > 10)
        cout << "3\n";
    else if (sum > 2)
        cout << "2\n";
    else
        cout << "1\n";
}