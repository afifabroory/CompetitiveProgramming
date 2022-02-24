#include <bits/stdc++.h>
using namespace std;

void solve();
struct Coke {
    int c; // Temperature
    int p; // Price
};

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short n, m;
    int k;
    short l, r;
    cin >> n >> m >> k >> l >> r;

    struct Coke can[n];
    for (unsigned i = 0; i < n; i++) {
        cin >> can[i].c;
        cin >> can[i].p;
        for (unsigned j = 0; j < m; j++) {
            if (can[i].c > k+1) can[i].c--;
            else if (can[i].c < k-1) can[i].c++;
            else if (k-1 <= can[i].c && can[i].c <= k+1) can[i].c = (int) k;
        }
    }

    int can_price = -1;
    for (unsigned i = 0; i < n; i++) {
        if (l <= can[i].c && can[i].c <= r) {
            if (can_price > can[i].p or can_price < 0) can_price = can[i].p;
        }
    }
    cout << can_price << '\n';
}