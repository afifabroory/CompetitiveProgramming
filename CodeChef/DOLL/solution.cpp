#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned int t, n, k, h;
	cin >> t;
	
	unsigned int ans;
	while (t--) {
		cin >> n >> k;

		ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> h;
			if (h > k) ans++;
		}

		cout << ans << '\n';
	}
}
