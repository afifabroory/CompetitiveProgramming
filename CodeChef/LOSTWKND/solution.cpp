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
    unsigned short a, aSum = 0, p;
    for (unsigned i = 0; i < 5; i++) {
        cin >> a;
        aSum += a;
    }
    cin >> p;

    if (aSum*p <= 120) cout << "No\n";
    else cout << "Yes\n";

}