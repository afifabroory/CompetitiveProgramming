#include <iostream> 

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    unsigned size;
    char* binaryStr_Test;
    while (test--) {
        cin >> size;

        if (size%2 != 0) {
            cout << "-1\n";
            continue;
        }

        for (int i = 1; i <= size; i++) {
            if (i%2 == 0) cout << '1';
            else cout << '0';
        }

        cout << '\n';
    }

    return 0;
}