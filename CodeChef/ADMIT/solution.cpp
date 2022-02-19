#include <bits/stdc++.h>
using namespace std;

// UNSOLVED 

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned n, m, cheffIndex;
    cin >> n >> m;
    unsigned college[n], student[m];
    for (unsigned i = 0; i < n; i++) cin >> college[i];
    for (unsigned i = 0; i < m; i++) {
        cin >> student[i];
        if (student[i] == 1) cheffIndex = i;
    }

    unsigned cheffCollege = 0;
    vector<vector<unsigned>> apply;
    bool full[n] = {false};
    for (unsigned i = 0; i < m; i++) {
        unsigned total, collegeid;
        cin >> total;

        vector<unsigned> v;
        for (unsigned j = 0; j < total; j++) {
            cin >> collegeid; v.push_back(collegeid);
        }
        apply.push_back(v);
    }

    for (unsigned i = 0; i < m; i++) {
        bool flag = false;
        for (unsigned j = 0; j < apply[i].size(); j++) {
            if (!full[apply[i][j]-1]) {
               full[apply[i][j]-1] = true;
               if (cheffIndex == i) cheffCollege = apply[i][j];
               break;
            }
        }
    }

    cout << cheffCollege << '\n';
}