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
    unsigned int n, na, nb, nc, nd;
    cin >> n;
    cin >> na >> nb >> nc >> nd;

    cout << max(na, max(nb, max(nc, nd))) << '\n';
}