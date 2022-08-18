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
    unsigned short a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a-c) > (b-d))
        cout << "SECOND\n";
    else if ((a-c) < (b-d))
        cout << "FIRST\n";
    else 
        cout << "ANY\n";
}