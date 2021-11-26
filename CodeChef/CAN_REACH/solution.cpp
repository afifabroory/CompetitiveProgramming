#include <iostream>

using namespace std;

int main() {
    unsigned short t, k;
    short x, y;

    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        
        if (x%k == 0 && y%k == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}