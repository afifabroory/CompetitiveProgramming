#include <iostream>

using namespace std;

int main() {
    unsigned short t, a, b;

    cin >> t;
    while (t--) {
        cin >> a >> b;

        if ((a+b)%2 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }

    return 0;
}