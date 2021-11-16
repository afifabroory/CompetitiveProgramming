#include <iostream>
#include "correctness_check.h"

using namespace std;

void solve(unsigned int vN, unsigned int eM) {
    unsigned int index = 0; 

    unsigned i = 1, j = 2;
    unsigned short c = 2;
    while (eM--) {        
        if (i%vN == 0) i = 1;
        if (j%(vN+1) == 0) {
            c++;
            j = c;
        }

        cout << i << ' ' << j << '\n';
        if (i == j) {
            cout << "Self loop\n";
            cin >> c;
            break;
        }
        i++; j++;
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
    }

    return 0;
}