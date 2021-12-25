#include <bits/stdc++.h>
#define FOR(a, b) for(unsigned i = a; i < b; i++)

using namespace std;

void solve(long long a[], unsigned n) {
	long long energy = 0;
	unsigned h = 0;
	
	FOR(1, n) {	
		if (a[i] < a[h]) {
			energy += (i-h + 1)*a[h] - a[i];
			h = i;
		}
	}

	
	if (h != n-1) energy += ((n-1)-h + 1)*a[h] - a[n-1];
	
	if (energy < 0) energy = 0;
	cout << energy << '\n';
}

int main() {
    unsigned short t;
    cin >> t;

    unsigned n;
    while (t--) {
        cin >> n;     
		long long a[n];

		FOR(0, n) cin >> a[i];

		solve(a, n);
    }

    return 0;
}
