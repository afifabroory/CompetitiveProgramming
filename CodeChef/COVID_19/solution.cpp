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
    /* n : number of row
     * m : number of seats in each row
     */
    unsigned short n, m;
    cin >> n >> m;
    cout << ((m%2) ? (m+1)/2 : m/2)*((n%2 == 0) ?  n/2 : (n == 1) ? 1 : (n+1)/2) << '\n';
}