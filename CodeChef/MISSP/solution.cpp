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
    unsigned N;
    cin >> N;

    unordered_map <unsigned, unsigned> m;
    for (unsigned i = 0; i < N; i++) {
        unsigned tmp;
        cin >> tmp;

        m[tmp]++;
    }

    for (auto &e: m) {
        if (e.second%2 != 0) {
            cout << e.first << '\n';
            break;
        }
    }
}