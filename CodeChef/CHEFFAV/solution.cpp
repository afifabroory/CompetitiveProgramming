#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned short t;
	cin >> t;

    while (t--) {
        unsigned n;
        string s;
        cin >> n >> s;

        if (s.find("code") < s.find("chef")) cout << "AC\n";
        else cout << "WA\n";
    }

	return 0;
}
