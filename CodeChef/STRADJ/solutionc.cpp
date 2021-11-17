#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned short t;
    cin >> t;

    string binary, winner;
    unsigned int strSize, totalTurn = 0;;
    while(t--) {
        cin >> strSize;
        cin >> binary;
        
        winner = "Bob\n";
        for (int i = 0; i < strSize-1; i++) {
            if (binary[i] != binary[i+1]) totalTurn++;
        }

        cout << totalTurn;
        if (totalTurn > 0 && (totalTurn%2) != 0) winner = "Alice\n";
        cout << winner;
    }

    return 0;
}