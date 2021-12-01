#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<unsigned int, unsigned int> g_value;

unsigned int exchange(unsigned int n) {
    unsigned int a = n/2, b = n/3, c = n/4;
    
    if (g_value.find(n) != g_value.end()) return g_value[n];
    if (n > 11 && (a+b+c) > n) {

        g_value[n] = exchange(a) + exchange(b) + exchange(c); 
        return g_value[n];
    }
    return n;
}

void solve(unsigned int n) {
    if (n > 11) {
        cout << exchange(n) << '\n';
    } else {
        cout << n << '\n';
    }
}

int main() {
    unsigned short t = 10;
    unsigned int n;

    while (t--) {
        cin >> n;
        solve(n);
    }

    return 0;
}