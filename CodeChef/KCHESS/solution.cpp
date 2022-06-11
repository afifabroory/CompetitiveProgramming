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
    unsigned long n;
    cin >> n;

    multiset<pair<int, int>> knight;
    while (n--) {
        int x, y;
        cin >> x >> y;

        knight.insert({x-2, y+1});
        knight.insert({x+2, y+1});

        knight.insert({x-2, y-1});
        knight.insert({x+2, y-1});

        knight.insert({x-1, y+2});
        knight.insert({x+1, y+2});

        knight.insert({x-1, y-2});
        knight.insert({x+1, y-2});
    }

    int a, b;
    cin >> a >> b;

    #define c(x, y) knight.find({(x), (y)}) != knight.end()

    if(c(a, b) && c(a-1, b-1) && c(a, b-1) 
        && c(a+1, b-1) && c(a-1, b) && c(a+1, b) 
        && c(a-1, b+1) && c(a, b+1) && c(a+1, b+1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}