#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned short t;
	cin >> t;
	
	unsigned long long x, y, z;
	while (t--) {
		cin >> x >> y >> z;

		if (x+y > z) cout << "TRAIN\n";
		else if (x+y < z) cout << "PLANEBUS\n";
		else cout << "EQUAL\n";
	}

	return 0;
}
