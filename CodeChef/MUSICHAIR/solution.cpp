#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    while (test--) {
        unsigned int n_peer;
        cin >> n_peer;

        if (n_peer == 2) cout << 1 << '\n';
        else {
            unsigned total = 2;

            for (int i = 2; i <= floor(sqrt(n_peer-1)); i++) {
                if (n_peer%i == 1 && sqrt(n_peer-1) != i) total += 2;
                else if (n_peer%i == 1) total += 1;
            }
            cout << total << '\n';
        }
    }

    return 0;
}