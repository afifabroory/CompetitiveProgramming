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
    unsigned n, d;
    unsigned long infected;
    cin >> n >> d;

    if (d == 0) {
        cout << "1\n";
    } else if  (d >= 21) {
        /* If d >= 21, then it's exceeded 10^8 population.
           So, just return N population.
           1024 * (3^11) > 100000000 
         */
        cout << n << '\n';
    } else if (d >= 11 and n <= 1024) {
        cout << n << '\n';
    } else if (d <= 10) {
        infected = pow(2, d);
        if (infected > n) cout << n << '\n';
        else cout << infected << '\n';
    } else {
        infected = 1024;
        d -= 10;
        infected *= pow(3, d);
        if (infected > n) cout << n << '\n';
        else cout << infected << '\n';
    }
}