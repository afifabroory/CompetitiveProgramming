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
    unsigned long long N;
    cin >> N;

    if (N == 1)
        cout << 3 << '\n';
    else {
        // Next number with pattern 1..5 are divisble by 3 and not 9
        for (unsigned i = 0; i < N; i++) {
            if (i == 0) cout << 1;
            else if (i == N-1) cout << 5;
            else cout << 0;
        }
        cout << '\n';
    }
}