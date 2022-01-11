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
    unsigned short hard, tensile;
    float carbon;
    cin >> hard >> carbon >> tensile;
    unsigned short grade = 5;
    if (hard > 50 and carbon < 0.7 and tensile > 5600) grade += 5;
    else if (hard > 50 and carbon < 0.7) grade += 4;
    else if (carbon < 0.7 and tensile > 5600) grade += 3;
    else if (hard > 50 and tensile > 5600) grade += 2;
    else if (hard > 50 or carbon < 0.7 or tensile > 5600) grade += 1;

    cout << grade << '\n';
}