#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short n;
    cin >> n;
    unsigned short h[n], lSum = 0, rSum = 0;
    for (unsigned i = 0; i < n; i++) {
        cin >> h[i]; 
        
        if (i <= (n/2)-1) lSum += h[i];
        if (i >= (n/2)+1) rSum += h[i];
    }

    unsigned short expSum = n == 3 ? 1 : (h[n/2-1]*(h[n/2-1]+1))/2;
    if (n%2 == 0 or h[0] != 1 or h[n-1] != 1 or h[n/2]-1 != h[n/2-1] or h[n/2]-1 != h[n/2+1]) cout << "no\n";
    else if (lSum == expSum and rSum == expSum) cout << "yes\n";
    else cout << "no\n";
}