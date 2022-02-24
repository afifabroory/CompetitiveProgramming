#include <bits/stdc++.h>
using namespace std;

// UNSOLVED

void solve();

int main() {
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned x = rand()%1000000000 + 1, y = rand()%1000000000 + 1;
    //cin >> x >> y;
    unsigned x2, y2;
    x2 = x; y2 = y;
    cout << x << " " << y << '\n';

    unsigned ans, tmp, tmp2, tmp3;
    if (x == y) ans = x;
    else {
        tmp = min(x,y);
        tmp2 = max(x,y);
        while (tmp2 != tmp) {
            tmp3 = tmp;
            tmp = tmp2%tmp;
            tmp2 = tmp;
        }
        ans = tmp3;
    }
 
    bool turn;
    while (x2 != y2 and x2 != 0 and y2 != 0) {
        if (x2 < y2) turn = true;
        else turn = false;

        if (turn) y2 -= x2;
        else x2 -= y2;
    }

    cout << ans*2 << " | " << x2+y2 << '\n';
    assert(ans*2 == x2+y2);
}