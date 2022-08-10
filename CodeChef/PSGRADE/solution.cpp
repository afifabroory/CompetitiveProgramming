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
    unsigned short a_min, b_min, c_min, t_min;
    unsigned short a, b, c;
    cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;

    unsigned short sum = a + b + c;
    if (a >= a_min && b >= b_min && c >= c_min && sum >= t_min)
        cout << "YES\n";
    else
        cout << "NO\n";
}