#include <bits/stdc++.h>

#define FOR(a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
	unsigned short t;
	cin >> t;
	
	unsigned int n, a, ans, small;
	while (t--) {
		cin >> n;
		
		ans = 0; small = INT_MAX;
		FOR(0, n) {
			cin >> a;
			ans += a;

			if (a < small) small = a;
		}

		cout << ans-small << '\n';
	}

	return 0;
}
