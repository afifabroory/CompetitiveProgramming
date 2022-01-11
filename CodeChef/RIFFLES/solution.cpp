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
    unsigned n, k; cin >> n >> k;
    if (n == 2) {
        cout << "1 2\n"; return;
    }

    bool visited[n] = {false};
    visited[0] = true; visited[n-1] = true;
    
    unsigned ans[n];
    ans[0] = 1; ans[n-1] = n;

    for (unsigned i = 1; i < n; i++) {
        if (!visited[i]) {
            vector<unsigned> cycle;
            unsigned init = i+1, next = i+1;
            cycle.push_back(next);
            visited[next-1] = true;
            while (1)  {
                if (next%2 == 1) {
                    next = (next+1)/2;
                    if (init == next) break;
                    cycle.push_back(next);
                }
                else {
                    next = n/2 + next/2;
                    if (init == next) break;
                    cycle.push_back(next);
                }
                visited[next-1] = true;
            }

            unsigned cycleLen = cycle.size();
            for (unsigned j = 0; j < cycleLen; j++) {
                ans[cycle[(j+k)%cycleLen]-1] = cycle[j];
            }
        }
    }

    for (unsigned i = 0; i < n-1; i++) cout << ans[i] << ' ';
    cout << ans[n-1] << '\n';
}