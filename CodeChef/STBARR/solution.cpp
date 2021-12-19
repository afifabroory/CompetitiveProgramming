#include <iostream>
#include <cmath>
#include <unordered_map>

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    unsigned short size, max, index, a;
    while (test--) {
        unordered_map<unsigned short, unsigned short> element;

        cin >> size;
        max = 0; index = 0;
        for (int i = 0; i < size; i++) {
            cin >> a;
            element[a] += 1;

            if (a >= max) {
                max = a;
                index = i;
            }
        }

        if (element.size() == 1) cout << "0\n"; 
        else if (index == (size-1)) cout << "1\n";
        else cout << "2\n";
    }
}