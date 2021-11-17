#include <iostream>

using namespace std;

int main() {
    unsigned short t;
    cin >> t;

    unsigned long x, y;
    while (t--) {
        cin >> x >> y;
       
	// Coin X must even. Whatever coin Y is odd or even.
	// If coin X is zero then coin Y must even.
	// Otherwise NO
	
        if (x > 0 && x%2 == 0) cout << "YES\n";
	else if (x == 0 && y%2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
