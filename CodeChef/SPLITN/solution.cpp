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

unsigned int countBit(unsigned int n) {
    unsigned int cnt = 0;
    while (n) {
        n &= (n-1);
        cnt++;
    }

    if (cnt%2 != 0) return 0;
    else return cnt/2;
}

void solve() {
    unsigned int n;
    cin >> n;

    if (pow(2, floor(sqrt(n))) == n) cout << "0\n";
    else cout << countBit(n) << '\n';
}