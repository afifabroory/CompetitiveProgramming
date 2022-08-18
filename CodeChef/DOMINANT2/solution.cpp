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

    unsigned short a[n];

    map<unsigned short, unsigned short> dominant;
    unsigned short max_occur = 0;
    for (unsigned i = 0; i < n; i++)  {
        cin >> a[i];
        dominant[a[i]]++;
        max_occur = max(max_occur, dominant[a[i]]);
    }

    unsigned short q = 0;
    for (auto e : dominant) {
        if (e.second == max_occur)
            q++;
    }

    cout << ((q == 1) ? "YES" : "NO") << '\n';
}