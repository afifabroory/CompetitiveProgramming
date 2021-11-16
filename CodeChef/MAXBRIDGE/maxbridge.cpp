#include <iostream>

using namespace std;

void solve(unsigned int vN, unsigned int eM) {
    unsigned int i = 1, j = 2, c = 2, r = vN;
    while (eM--) {        
        cout << i << ' ' << j << '\n';
        i++; j++;
        
        if (i%r == 0) i = 1;
        if (j%(vN+1) == 0) {
            c++;
            j = c;
            r--;
        }
    }
}

int main() {
    unsigned int t, vN, eM;

    cin >> t;
    while (t--) {
        cin >> vN >> eM;
        solve(vN, eM);
    }

    return 0;
}