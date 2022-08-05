#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

// O(n*n)
void solve() {
    unsigned short n;
    cin >> n;

    unsigned int ai[n];
    for (unsigned i = 0; i < n; i++) {
        unsigned int tmp;
        cin >> tmp;
        ai[i] = tmp;
    }

    // Preprocessing subArray
    map<unsigned int, unsigned int> subArray;
    for (unsigned i = 0; i < n; i++) {
        unsigned int key = ai[i];
        
        // Count number of subarray (key, ???)
        for (unsigned j = i; j < n; j++) {
            unsigned int value = ai[j];

            // Move key ('pivot') to be value, if value < min
            key = min(key, value);

            // Increment subArray (key, value)
            subArray[key]++;
        }
    }

    unsigned short q;
    cin >> q;

    for (unsigned i = 0; i < q; i++)  {
        unsigned int k;
        cin >> k;

        // Lookup value from subArray using k as a query
        cout << subArray[k] << '\n';
    }
}