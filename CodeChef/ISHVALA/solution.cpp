#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    // n: vertical
    // m: horizontal
    unsigned n, m, x, y, s;
    cin >> n >> m >> x >> y >> s;

    unsigned x_i, y_i;
    unsigned grid_x = 0, grid_y = 0, prev_x = 0, prev_y = 0;
    
    // Horizontal river
    for (unsigned i = 0; i < x; i++) {
        cin >> x_i;
        grid_y += (x_i-1 - prev_y)/s;
        prev_y = x_i;
    }
    grid_y += (n - prev_y)/s;
    
    // Vertical river
    for (unsigned i = 0; i < y; i++) {
        cin >> y_i;
        grid_x += (y_i-1 - prev_x)/s;
        prev_x = y_i;
    }
    grid_x += (m - prev_x)/s;

    cout << (grid_x*grid_y) << '\n';
}