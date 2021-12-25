#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned short t;
	cin >> t;

	unsigned n;
	while (t--) {
		cin >> n;

		unsigned long arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		sort(arr, arr+n);

		cout << (arr[n-1] - arr[0]) * arr[n-2] << '\n';
	}	

	return 0;
}
