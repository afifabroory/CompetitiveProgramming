#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    unsigned r;
    cin >> r;
    
    if (r <= 50) cout << 100 << '\n';
    else if (r <= 100) cout << 50 << '\n';
    else cout << 0 << '\n';

    return 0;
}