#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned short N, A, B;
    cin >> N >> A >> B;

    cout << (N - A) << " " << (N - A) - B;
}