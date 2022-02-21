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
    unsigned n;
    cin >> n;

    unsigned a, smallest = 100001, smallest_index;
    for (unsigned i = 0; i < n; i++) {
        cin >> a;
        smallest = min(smallest, a); 
    }

    cout << smallest*(n-1) << '\n';
}