#include <iostream>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned short n, k;
    unsigned m, q;

    cin >> n >> m >> k;
    
    unsigned t[n][2];
    unsigned short tmp;
    for (unsigned short i = 0; i < n; i++) {
        t[i][0] = 0;
        for (unsigned j = 0; j < k; j++) {
            cin >> tmp;
            t[i][0] += tmp;
        }
        cin >> q;
        t[i][1] = q;
    }

    unsigned short total_eligible_participant = 0;
    for (unsigned i = 0; i < n; i++)
        if (t[i][0] >= m && t[i][1] <= 10) total_eligible_participant++;
    cout << total_eligible_participant << '\n';
}