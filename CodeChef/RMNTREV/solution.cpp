#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned t;
	cin >> t;
	
	while (t--) {
		unsigned n, k;
		cin >> n >> k;

		string s_prime, s;
		cin >> s_prime;
		
		for (int i = 0; i < n-k; i++) s.push_back(s_prime[n-i-1]);
		
		int i = 0, j = k-1;
		while (i < j) {
			s.push_back(s_prime[i]);
			s.push_back(s_prime[j]);
			i++; j--;
		}
		if (i == j) s.push_back(s_prime[i]);

		reverse(s.begin(), s.end());
		cout << s << '\n';
	}

	return 0;
}
