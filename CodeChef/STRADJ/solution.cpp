#include <iostream>

using namespace std;

void solve() {
    string binary;
    unsigned strSize, cnt0 = 0, cnt1, minChar;

    cin >> strSize;
    cin >> binary;
        
    for (int i = 0; i < strSize; i++) if (binary[i] == '0') cnt0++;
    cnt1 = strSize - cnt0;

    // Number of optimal turn are not exceeded max(cnt0, cnt1).
    // Alice win iff there is only one occurence of 1 or 0 in S. (Special Case)
    // Bob win iff all char in S are 1 or 0. (Special Case)
    // Alice win iff |S| are odd. (General Case)
    minChar = (cnt0 <= cnt1) ? cnt0 : cnt1;

    if (minChar == 0) cout << "Bob\n";
    else if (minChar == 1) cout << "Alice\n";
    else if (strSize%2 == 0) cout << "Bob\n";
    else cout << "Alice\n";
}

int main() {
    unsigned short t;

    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
