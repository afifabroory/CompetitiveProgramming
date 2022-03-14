#include <bits/stdc++.h>
using namespace std;

// UNSOLVED

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned N, X;
    cin >> N >> X;

    unsigned A = ceil(X/3);
    unsigned B = (ceil(X/N)*N) - X;
    unsigned C = X == 0 ? N : 0;

    cout << A << ' ' << B  <<  ' '  << C << '\n';
    if (A*3+B+C == X) {
        cout << "YES\n";
        cout << A << ' ' << B  <<  ' '  << C << '\n';
    } else cout << "NO\n";
}

// 12 32
// YES
// 11 1 0

// ceil(32/3) (ceil(32/3)*3)-32 0

// 8 0
// YES
// 1 3 4

// ceil()