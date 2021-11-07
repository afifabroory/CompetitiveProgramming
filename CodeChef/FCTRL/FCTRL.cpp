#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int t, n, k, sum = 0;
    cin >> t;

    while (t--) {
        sum = 0;
        cin >> n;
        
        if (n>4) {
            k = floor(log10(n) / log10(5)) + 1;

            for (int i = 1; i <= k; i++) {
                sum += floor(n /((int) pow(5, i)));
            }
        }

        cout << sum << "\n";
    }

    return 0;
}