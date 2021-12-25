#include <iostream>

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    while (test--) {
        unsigned short int x_1, y_1, x_2, y_2;
        cin >> x_1 >> y_1;
        cin >> x_2 >> y_2;


        if (x_1 == x_2 or y_1 == y_2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}