#include <bits/stdc++.h>
using namespace std;

void count_binStr(string s, unsigned size, unsigned &cnt_1, unsigned &cnt_2) {
	for (unsigned i = 0; i < size; i++) {
		if (s[i] == '1') cnt_1++;
		else cnt_2++;
	}
}

int main() {
	unsigned short t;
	cin >> t;

	while (t--) {
		unsigned n, cnt_1 = 0, cnt_0 = 0;
		cin >> n;
		
		string s;
		cin >> s;

		count_binStr(s, n, cnt_1, cnt_0);

		if (cnt_1 < 2 or cnt_0 < 2) cout << 0 << '\n';
		else if (cnt_0 < cnt_1) cout << cnt_0 - 1 << '\n';
		else cout << cnt_1 - 1 << '\n';
	}
	
	return 0;
}
