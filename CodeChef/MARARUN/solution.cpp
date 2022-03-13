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
    unsigned D, d;
    unsigned A, B, C;
    cin >> D >> d >> A >> B >> C;

    unsigned total_distance = D * d;
    if (total_distance >= 42) cout << C << '\n';
    else if (total_distance >= 21 && total_distance < 42) cout << B << '\n';
    else if (total_distance >= 10 && total_distance < 21) cout << A << '\n';
    else cout << "0\n";
}