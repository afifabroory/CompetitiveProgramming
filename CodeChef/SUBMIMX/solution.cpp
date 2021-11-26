#include <iostream>
#include <cmath>

using namespace std;

string generate_optimal_str(unsigned n, unsigned m) {
    string binaryStr(n, '0');

    unsigned mid;
    if (m%2 == 0) {
        mid = ((n%2 != 0) ? (n+1)/2+1 : n/2+1) -1;
    } else {
        mid = ((n%2 != 0) ? (n+1)/2 : n/2) -1;
    }

    binaryStr[mid] = '1';
    m--;

    while (1) {
        if (mid-2 > 0 && m > 0) {
            binaryStr[mid-2] = '1';
            m--;
        } else if (mid-1 > 0 && m > 0) {
            binaryStr[mid-1] = '1';
            m--;
        }

        if (mid+2 <= n && m > 0) {
            binaryStr[mid+2] = '1';
            m--;
        } else if (mid+1 <= n && m > 0) {
            binaryStr[mid+1] = '1';
            m--;
        }

        if (m == 0) break;
    }

    return binaryStr;
}

void solve(string s) {
    unsigned cnt = 0, total = 0;
    
    cout << s << " this str\n";
    for (int i = 0; i < s.size(); i++) {

        if (s[i] == '0') cnt++;
        
        if (s[i] != '0') {
            total += (pow(2, cnt) - 1);
            cnt = 0;
        }
    }
    total += (pow(2, cnt) - 1);

    cout << total << '\n';
}

int main() {
    unsigned t, n, m;
    string str;

    cin >> t;
    while (t--) {
        cin >> n >> m;

        str = generate_optimal_str(n,m);
        solve(str);
    }

    return 0;
}