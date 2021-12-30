#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
	unsigned short t;
	cin >> t;
	
	while (t--) solve();

	return 0;
}

unsigned kadaneAlg(int arr[], unsigned size) {
	unsigned max = 0;
	int curr = 0;
	
	for (unsigned i = 0; i < size; i++) {
		curr += arr[i];

		if ((int) max < curr) max = curr;
		if (curr < 0) curr = 0;
	}

	return max;
}

unsigned r_kadaneAlg(int arr[], unsigned size) {
	unsigned max = 0;
	int curr = 0;

	for (int i = size-1; i >= 0; i--) {
		curr += arr[i];
		
		if ((int) max < curr) max = curr;
		if (curr < 0) curr = 0;
	}
	
	return max;
}
void solve() {
	unsigned n, k;
	cin >> n >> k;

	int arr[n];
	for (unsigned i = 0; i < n; i++) cin >> arr[i];

	cout << kadaneAlg(arr, n) << '\n';
	cout << r_kadaneAlg(arr, n) << '\n';
}

