#include <bits/stdc++.h>
using namespace std;

void solve();

// Has tree children numbered 1...3
// If older then more money
// if same age then same amount of money

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short tmp, a[3], c[3];
    bool isFair = true;
    for (unsigned i = 0; i < 3; i++) cin >> a[i];
    for (unsigned i = 0; i < 3; i++) cin >> c[i];

    for (unsigned i = 0; i < 3; i++)   {
        for (unsigned j = 0; j < 3; j++)  {
            if (i != j) {
                if (a[i] > a[j] && c[i] <= c[j]) {
                    isFair = false;
                    goto conclusion;
                } else if (a[i] < a[j] && c[i] >= c[j]) {
                    isFair = false;
                    goto conclusion;
                } else if (a[i] == a[j] && c[i] != c[j]) {
                    isFair = false;
                    goto conclusion;
                }
            }
        }
    }
    
    conclusion:
    if (isFair) cout << "FAIR\n";
    else cout << "NOT FAIR\n";
}