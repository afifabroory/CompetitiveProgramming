#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned int n, q;
    cin >> n >> q;

    unsigned int row[n] = {};
    unsigned int col[n] = {};

    unsigned int maxRow = 0;
    unsigned int maxCol = 0;
    for (unsigned i = 0; i < q; i++) {
        string opt;
        cin >> opt;

        unsigned int oprd1, oprd2;
        cin >> oprd1 >> oprd2;


        // Kita hanya perlu menghitung maximum element row dan column, secara terpisah
        // dengan mengabungkan kombinasi maxRow dan maxCol, kita mendapatkan solusi nya.
        // Sehingga secara space complexity hanya membutuhkan O(n) dan time complexity nya sebesar O(n)
        if (opt == "RowAdd") {
            row[oprd1-1] += oprd2;
            maxRow = max(maxRow, row[oprd1-1]);
        } else if (opt == "ColAdd") {
            col[oprd1-1] += oprd2;
            maxCol = max(maxCol, col[oprd1-1]);
        }
    }
    
    cout << maxRow + maxCol << '\n';
}