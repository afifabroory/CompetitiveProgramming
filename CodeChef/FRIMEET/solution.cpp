#include <iostream>

using namespace std;

int main() {
    unsigned int test;
    cin >> test;

    while (test--) {
        unsigned int x_1, x_2;
        cin >> x_1 >> x_2;

        if (x_1 < x_2) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}