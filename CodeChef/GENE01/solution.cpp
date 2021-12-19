#include <iostream>

using namespace std;

int main() {
    char parent1, parent2;
    cin >> parent1 >> parent2;

    if (parent1 == 'R' || parent2 == 'R') cout << "R\n";
    else if (parent1 == 'B' || parent2 == 'B') cout << "B\n";
    else cout << "G\n";
}