#include <iostream>

using namespace std;

int main() {
    unsigned short t;
    cin >> t;

    unsigned long x, y;
    while (t--) {
        cin >> x >> y;
        
        if (x > 0 && (x + 2*y)%2 == 0) cout << "YES\n";
        else if ((x+2*y)%4 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}