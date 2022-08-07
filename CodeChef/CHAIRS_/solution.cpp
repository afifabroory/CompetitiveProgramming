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
    unsigned short student, chair;
    cin >> student >> chair;

    if (chair >= student)
        cout << 0 << '\n';
    else
        cout << abs(student-chair) << '\n';
}