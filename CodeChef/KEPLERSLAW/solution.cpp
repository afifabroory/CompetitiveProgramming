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
    double t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;
    cout << ((pow(t1, 2)/pow(r1, 3) == pow(t2, 2)/pow(r2, 3)) ? "Yes" : "No") << '\n';
}