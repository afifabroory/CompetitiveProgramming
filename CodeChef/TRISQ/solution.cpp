#include <bits/stdc++.h>
using namespace std;

// Pre compute
unsigned b[10001] = {0};
void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for (unsigned short i = 3; i <= 10000; i++) b[i] = (((i+1)-2)/2)*((((i+1)-2)/2)+1)/2;
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short base;
    cin >> base;
    cout << b[base-1] << '\n';
}