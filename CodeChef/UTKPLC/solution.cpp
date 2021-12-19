#include <iostream>

using namespace std;

void solve(string companies, string offer) {
    unsigned short smallestIndex = 3;

    for (unsigned short i = 0; i < 3; i++) {
        
        unsigned short j = 0;
        while (i < smallestIndex && j < 2) {
            if (companies[i] == offer[j]) {
                smallestIndex = i;
            }
            j++;
        }
    }

    cout << companies[smallestIndex] << '\n';
}

int main() {
    unsigned short t;
    
    cin >> t;
    while (t--) {
        string companies, offer;
        char temp;

        for (int i = 0; i < 3; i++) {
            cin >> temp;
            companies += temp;
        }

        for (int i = 0; i < 2; i++) {
            cin >> temp;
            offer += temp;
        }

        solve(companies, offer);
    }

    return 0;
}