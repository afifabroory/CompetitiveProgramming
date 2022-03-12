#include <iostream>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short m, h;
    cin >> m >> h;

    unsigned short BMI = m/(h*h);
    if (BMI <= 18) cout << "1\n";
    else if (BMI >= 19 && BMI <= 24) cout << "2\n";
    else if (BMI >= 25 && BMI <= 29) cout << "3\n";
    else cout << "4\n";
}