#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned short n;
    cin >> n;

    for (unsigned i = 10; i >= 1; i--) {
        if (n%i == 0) {
            cout << i << '\n';
            break;
        }
    }
}