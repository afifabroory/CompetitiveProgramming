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
    unsigned k, n;
    cin >> n >> k;

    unsigned team_score[n];
    for (unsigned i = 0; i < n; i++) cin >> team_score[i];
    sort(team_score, team_score+n, greater<unsigned>());

    unsigned k_score = team_score[k-1], n_teams = 0;
    for (unsigned i = 0; i < n && team_score[i] >= k_score; i++) n_teams++;
    cout << n_teams << '\n';
}