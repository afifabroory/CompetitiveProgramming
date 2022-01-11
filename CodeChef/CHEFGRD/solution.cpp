#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned n, akashX, akashY, center;
    cin >> n >> akashX >> akashY;
    center = (n+1)/2;

    if (akashX == akashY) cout << "0\n";
    else if (akashX%2 != 0 and akashY%2 != 0) cout << "0\n";
    else if (akashX%2 == 0 and akashY%2 == 0) cout << "0\n";
    else if (akashX-1 == center and akashY+1 == center) cout << "0\n";
    else if (akashX+1 == center and akashY-1 == center) cout << "0\n";
    else if (akashX+1 == center or akashY+1 == center) cout << "1\n";    
    else if (akashX-1 == center or akashY-1 == center) cout << "1\n";
    else cout << "1\n";
}