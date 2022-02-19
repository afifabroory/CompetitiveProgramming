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
    unsigned n, k, a; cin >> n >> k;
    unsigned long long sum = 0;
    for (unsigned i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }

    // odd + odd = even
    // even + even = even
    // odd + even = odd (*)
    if (k == 1 && sum%2 == 0) cout << "odd\n";
    else cout << "even\n";
}