#include <iostream>
#include "correctness_check.h"

using namespace std;

void solve(int vN, int eM) {
    for (int i = 1; i < vN; i++) {
        cout << i << ' ' << i + 1 << '\n';
    }
    
    eM -= (vN-1);

    int i = 3;
    while (eM > 0) {
        for (int j = 1; j < i-1 && eM > 0; j++) {
            cout << j << ' ' << i << '\n';
            eM--;
        }
        i++; 
    }
}

int min(unsigned short a, unsigned short b) {
    if (a < b) return a;
    else return b;
}

int main() {
    unsigned short t, vN, eM;

    cin >> t;
    while (1) {
        //vN = 2 + ( rand() % ( 1000 - 2 + 1 ) );
        //eM = (vN-1) + ( rand() % ( min((vN*(vN-1)/2), 100000) - (vN-1) + 1 ) );
        vN = 2 + ( rand() % ( 10 - 2 + 1 ) );
        eM = (vN-1) + ( rand() % ( min((vN*(vN-1)/2), 100000) - (vN-1) + 1 ) );
        cout << "TEST " << vN << " " << eM << "\n";
        solve(vN, eM);
        cin >> vN;
    }

    return 0;
}