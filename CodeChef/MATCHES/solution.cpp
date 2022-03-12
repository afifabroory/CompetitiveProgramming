#include <iostream>
using namespace std;

#define _0 6
#define _1 2
#define _2 5
#define _3 5
#define _4 4
#define _5 5
#define _6 6
#define _7 3
#define _8 7
#define _9 6

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned a, b;
    cin >> a >> b;

    unsigned sum = a + b;
    unsigned short total_matches = 0;
    while (sum) {
        switch (sum%10) {
            case 0:
                total_matches += _0;
                break;
            case 1:
                total_matches += _1;
                break;
            case 2:
                total_matches += _2;
                break;
            case 3:
                total_matches += _3;
                break;
            case 4:
                total_matches += _4;
                break;
            case 5:
                total_matches += _5;
                break;
            case 6:
                total_matches += _6;
                break;
            case 7:
                total_matches += _7;
                break;
            case 8:
                total_matches += _8;
                break;
            case 9:
                total_matches += _9;
        }
        sum /= 10;
    }
    cout << total_matches << '\n';
}