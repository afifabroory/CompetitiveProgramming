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
    unsigned short n;
    cin >> n;

    unsigned ptA = 0, ptB = 0;
    while (n--) {
        string a, b;
        cin >> a >> b;
        unsigned sumA = 0, sumB = 0;
        for (unsigned i = 0; i < a.length(); i++) sumA += (int) a[i] - 48;
        for (unsigned i = 0; i < b.length(); i++) sumB += (int) b[i] - 48;
        if (sumA > sumB) ptA++;
        else if (sumB > sumA) ptB++;
        else {
            ptA++;
            ptB++;
        }
    }

    if (ptA > ptB) cout << "0 " << ptA << '\n';
    else if (ptB > ptA) cout << "1 " << ptB << '\n';
    else cout << "2 " << ptA << '\n';
}