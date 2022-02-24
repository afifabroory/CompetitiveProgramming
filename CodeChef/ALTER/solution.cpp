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
    long a, b, p, q;
    cin >> a >> b >> p >> q;
    
    long alice = p/a, bob = q/b;
    if (p == a && b == q) cout << "YES\n";
    else if (abs(alice-bob) <= 1 and p%a == 0 and q%b == 0) cout << "YES\n";
    else cout << "NO\n";
}