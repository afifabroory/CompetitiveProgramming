#include <iostream>

using namespace std;

int main() {
    unsigned int t, n, k;

    cin >> t;
    while (t--) {
        cin >> n >> k;
        
        if (n%k != 0 && n > 0) cout << -1;
        else if (n == 0) cout << 0;
        else cout << n/k;
        cout << '\n';
    }

    return 0;
}