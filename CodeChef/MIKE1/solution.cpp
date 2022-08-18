#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned long n, m;
    cin >> n >> m;

    unsigned long a[n][m];
    for (unsigned long i = 0; i < n; i++) {
        for (unsigned long j = 0; j < m; j++)
            cin >>a[i][j];
    }

    unsigned long l;
    cin >> l;

    long long e1 = 0, e2 = 0;
    for (unsigned long i = 0; i < l; i++) {
        unsigned long l1, l2;
        cin >> l1 >> l2;

        if (e1 != -1) {
            if (l2 > n || l1 > m)
                e1 = -1;
            else
                e1 += a[l2-1][l1-1];
        }
        
        if (e2 != -1) {
            if (l1 > n || l2 > m)
                e2 = -1;
            else
                e2 += a[l1-1][l2-1];
        }
    }

    cout << max(e1, e2) << '\n';
}