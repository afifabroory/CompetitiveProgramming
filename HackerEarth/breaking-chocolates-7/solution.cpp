#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
	unsigned t;
	cin >> t;
	
	while (t--) solve();

	return 0;
}


void solve() {
	unsigned n;
	unsigned long l;
	cin >> n >> l;

	unsigned long arr[n], totalLength = 0, totalLength2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		totalLength += arr[i];
		//totalLength2 += arr[i];
	}

	unsigned piece = 0;
	for (int i = 0; i < n; i++) {
		if (totalLength > l) {
			totalLength = max(totalLength-arr[i], totalLength-arr[n-1-i]);
			piece++;
		} else if (totalLength == l) {
			piece += 2; break;
		} else break;
	}

	//cout << totalLength << '\n';
	//unsigned piece = 0, piece_r = 0;
	/*for (int i = 0; i < n; i++) {
		if (totalLength > l) {
			piece++;
			totalLength -= arr[i];
		} else if (totalLength == l) {
			piece += 2;
			break;
		} else break;
	}*/

	/*unsigned piece_r = 0;
	for (int i = (n-1); i >= 0; i--) {
		if (totalLength2 > l) {
			piece_r++;
			totalLength2 -= arr[i];
		} else if (totalLength2 == l) {
			piece_r += 2;
			break;
		} else break;
	}*/

	//cout << piece << ' ' << piece_r << '\n';
	//if (max(piece, piece_r) == n) cout << "YES\n";
	if (piece <= n) cout << "YES\n";
	else cout << "NO\n";
}

