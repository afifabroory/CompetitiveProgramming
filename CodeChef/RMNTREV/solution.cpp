#include <bits/stdc++.h>
using namespace std;


// ALMOST SOLVED
int main() {
	unsigned t;
	cin >> t;
	
	while (t--) {
		unsigned n, k;
		cin >> n >> k;

		char s_prime[n], s[n+1] = "";
		cin >> s_prime;
		
		if (n != k) { 
			memcpy(s+k, s_prime+k, n-k);
			
			for (int i = 0; i < (k/2)+1; i++) {
				if ((k/2)+1 > 2*i) memcpy(s+((k/2)+1) - (2*i), s_prime+i, 1);
				else memcpy(s, s_prime+i, 1);
			}

			for (int i = 0; i < k/2-1; i++) {
				memcpy(s+(k/2) - (2*i), (s_prime+((k/2)+1)+i), 1);
			}
		}	
		else {
			//memcpy(s, s_prime, n);
			for (int i = 0; i < (k/2)+1; i++) {
                  if ((k/2)+1 > 2*i) memcpy(s+(n-1) - (2*i), s_prime+i, 1);
                  else memcpy(s, s_prime+i, 1);
              }   
  
             for (int i = 0; i <= k/2; i++) {
                  memcpy(s+i+1, (s_prime+((k/2)+1)+i), 1);
              }
		}

		cout << s << '\n';
	}

	return 0;
}
