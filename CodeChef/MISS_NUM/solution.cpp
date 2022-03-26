#include <bits/stdc++.h>
using namespace std;

int number[4];
void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned t;
    cin >> t;
    while (t--) solve();
    return 0;
}

bool is_a_solution(int a, int b) {
    bool flag = true;
    int tmp[4];
    copy(number, number+4, tmp);

    bool add = true, sub = true, divides = true, mul = true;
    for (unsigned short i = 0; i < 4; i++) {
        if (a+b == tmp[i] && add) add = false;
        else if (a-b == tmp[i] && sub) sub = false;
        else if (a*b == tmp[i] && mul) mul = false;
        else if (floor(a/b) == tmp[i] && divides) divides = false;
        else {
            flag = false;
            break;
        }
    }
    return flag;
}

void solve() {
    for (unsigned short i = 0; i < 4; i++) cin >> number[i];
    sort(number, number+4);

    int a = -1;
    int b = -1;
    int maximum = number[3];

    if (maximum - number[2] == 1) { // 1 <= a, b <= 3; a != b
        if (number[0] < 0 && number[2] != 0) {
            if (is_a_solution(1, number[2])) {
                a = 1;
                b = number[2];
            }
        } else {
            if (is_a_solution(number[2], 1)) {
                a = number[2];
                b = 1;
            }
        }
    // } else if (number[0] < 0) { // a < b
    } else {
        int m, n;

        if (maximum%2) {
            for (int d = 1; d < ceil(sqrt(maximum))+1; d += 2) {
                if (maximum%d == 0) {
                    m = (int) d;
                    n = maximum/m;

                    if (is_a_solution(m, n)) {
                        a = m;
                        b = n;
                        break;
                    } else if (is_a_solution(n, m)) {
                        a = n;
                        b = m;
                        break;
                    }
                }
            }
        } else {
            for (int d = 2; d < ceil(sqrt(maximum))+1; d += 2) {
                if (maximum%d == 0) {
                    m = (int) d;
                    n = maximum/m;

                    if (is_a_solution(m, n)) {
                        a = m;
                        b = n;
                        break;
                    } else if (is_a_solution(n, m)) {
                        a = n;
                        b = m;
                        break;
                    }
                }
            }
        }
    }
    // } else { // a >= b
    //     int m, n;

    //     for (unsigned d = ceil(sqrt(maximum)); d >= 1; d--) {
    //         if (maximum%d == 0) {
    //             n = (int) d;
    //             m = maximum/n;

    //             if (is_a_solution(n, m)) {
    //                 a = n;
    //                 b = m;
    //                 break;
    //             }
    //         }
    //     }
    // }
    cout << a << ' ' << b << '\n';
}