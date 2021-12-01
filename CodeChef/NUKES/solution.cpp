#include <iostream>
#include <cassert>

using namespace std;

void printArr(unsigned short arr[], unsigned short size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main() {
    unsigned int a;
    unsigned short n, k;

    cin >> a >> n >> k;

    while (k--) {
        cout << a%(n+1) << ' ';
        a /= (n+1);
    }

    return 0;
}