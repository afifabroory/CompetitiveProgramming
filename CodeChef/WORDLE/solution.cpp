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
    string S, T;
    cin >> S >> T;

    char M[5] = {0};
    for (unsigned i = 0; i < 5; i++) {
        if (S[i] == T[i]) M[i] = 'G';
        else M[i] = 'B';
    }

    cout << M << '\n';
}