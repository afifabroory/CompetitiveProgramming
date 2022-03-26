#include <bits/stdc++.h>
using namespace std;

int number[4];
void solve(int p, int q, int c, int d, int ans_m, int ans_n);

int main() {
    // for (unsigned i = 1; i < 10001; i++) {
    //     cout << "Ke-" << i << '\n';
    //     for (unsigned j = 1; j < 10001; j++) {
            
    //     }
    // }
    
    while (true) {
        int i = rand()%(10000 + 1) + 1;
        int j = rand()%(10000 + 1) + 1;
        solve(abs((int) (i+j)), i-j, abs((int) (i*j)), abs(floor(i/j)), i, j);
    }
    return 0;
}

bool is_a_solution(int a, int b) {
    bool flag = true;
    int tmp[4];
    copy(number, number+4, tmp);

    bool add = true, sub = true, div = true, mul = true;
    for (unsigned short i = 0; i < 4; i++) {
        if (a+b == tmp[i] && add) add = false;
        else if (a-b == tmp[i] && sub) sub = false;
        else if (a*b == tmp[i] && mul) mul = false;
        else if (floor(a/b) == tmp[i] && div) div = false;
        else {
            flag = false;
            break;
        }
    }
    return flag;
}

void solve(int p, int q, int c, int d, int ans_m, int ans_n) {
    assert(p >= -1000000000 or p <= 1000000000);
    assert(q >= -1000000000 or q <= 1000000000);
    assert(c >= -1000000000 or c <= 1000000000);
    assert(d >= -1000000000 or d <= 1000000000);
    number[0] = p;
    number[1] = q;
    number[2] = c;
    number[3] = d;
    sort(number, number+4);

    int a = -1;
    int b = -1;
    int maximum = number[3];

   if (maximum - number[2] == 1) { // 1 <= a, b <= 3; a != b
        if (number[0] < 0 && number[3]-1 != 0) {
            if (is_a_solution(1, number[3]-1)) {
                a = 1;
                b = number[3]-1;
            } else if (is_a_solution(2, 3)) {
                a = 2;
                b = 3;
            }
        } else {
            if (is_a_solution(number[3]-1, 1)) {
                a = number[3]-1;
                b = 1;
            } else if (is_a_solution(3, 2)) {
                a = 3;
                b = 2;
            }
        }
    } else if (number[0] < 0) { // a < b
        int m, n;

        for (int d = 1; d < ceil(sqrt(maximum))+1; d++) {
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

    } else { // a >= b
        int m, n;

        for (unsigned d = ceil(sqrt(maximum)); d >= 1; d--) {
            if (maximum%d == 0) {
                m = (int) d;
                n = maximum/m;

                if (is_a_solution(n, m)) {
                    a = n;
                    b = m;
                    break;
                } else if (is_a_solution(m, n)) {
                    a = m;
                    b = n;
                    break;
                }
            }
        }
    }

    cout <<  number[0] << ' ' <<  number[1] << ' ' <<  number[2] << ' ' <<  number[3] << '\n';
    if ((a != ans_m or b != ans_n) && (a != 1 && b != 1)) {
        cout << "Expected: \n";
        cout << ans_m << ' ' << ans_n << '\n';
        cout << "But, got: \n";
        cout << a << ' ' << b << '\n';
        while (true);        
    }
}