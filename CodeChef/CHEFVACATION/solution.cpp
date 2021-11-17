#include <iostream>

using namespace std;

int main() {
    unsigned short t;
    cin >> t;

    unsigned short x, y, z;
    while(t--) {
        cin >> x >> y >> z;
        if (x+y <= z) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}