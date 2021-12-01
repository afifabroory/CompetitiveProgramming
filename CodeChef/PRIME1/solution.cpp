#include <iostream>
#include <ios>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    bool isPrime = true;
    if (n > 3) {
        int j = ceil(sqrt(n));
        for (int i = 2; i <= j; i++) {
            if (n%i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}

void generatePrime(int a, int b) {

    if (a == 1) { 
        cout << 2 << '\n';              // Increment {a} if {a} are 1.
        a = 3;
    } else if (a == 2) {                  
        cout << a << '\n';              // Print {a} and increment {a} if {a} are two.
        a++;
    } else if (a%2 == 0 && a > 2) a++;  // Increment {a} if {a} are even and greater than 2.

    // Test only a odd numbers.
    do {
        if (isPrime(a)) cout << a << '\n';
        a += 2;
    } while (a <= b);

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned short test;
    cin >> test;

    int m, n;
    while(test--) {
        cin >> m >> n;

        generatePrime(m, n);
    }

    return 0;
}