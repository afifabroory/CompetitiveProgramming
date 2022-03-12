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
    unsigned short p, m , v;
    cin >> p >> m >> v;
    
    if (p != 1) p -= 1;
    else p = 0;

    cout << (m-p)*v << '\n';
}