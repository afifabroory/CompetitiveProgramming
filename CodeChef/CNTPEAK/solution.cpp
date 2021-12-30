#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned short t;
	cin >> t;

    while (t--) {
        unsigned short n;
        cin >> n;

        if (n < 3) cout << 0 << '\n';
        else cout << 10*(n-2)*pow(3,n-3) << '\n';
    }

	return 0;
}
