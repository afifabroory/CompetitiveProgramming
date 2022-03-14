#include <bits/stdc++.h>
using namespace std;

// UNSOLVED

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    string S;
    cin >> S;

    unsigned strLength = S.length();
    unsigned cnt = 1;

    string subStr = S.substr(0, cnt);
    unsigned last_found = 0;
    while (S.find_last_of(subStr) != last_found && cnt <= strLength) {
        cnt++;
        subStr = S.substr(0, cnt);
        last_found = S.find_last_of(subStr);
    }
    cnt--;

    if (cnt == 0) cout << "-1\n";
    else cout << strLength-cnt*2 << '\n';
}