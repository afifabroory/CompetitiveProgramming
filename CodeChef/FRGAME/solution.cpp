#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned short t;
	cin >> t;

    while (t--) {
        unsigned a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a >= b) b += c;
        else a += c;

        if (a >= b) b += d;
        else a+= d;

        if (b > a) cout << "S\n";
        else cout << "N\n";
    }

	return 0;
}
