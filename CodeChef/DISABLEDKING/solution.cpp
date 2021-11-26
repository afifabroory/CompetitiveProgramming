#include <iostream>

using namespace std;

int main() {
    unsigned short t, n;

    cin >> t;
    while (t--) {
        cin >> n;

        if (n%2 == 0) cout << n;
        else cout << (n-1);
        cout << '\n';
    }

    return 0;
}