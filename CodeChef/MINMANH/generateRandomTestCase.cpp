// Generate random numbers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    // Generate random numbers between 1 and 10^5
    srand(time(NULL));
    int n = rand() % 10000 + 1;
    int m = rand() % 10000 + 1;

    //int n = rand() % 25 + 1;
    //int m = rand() % 25 + 1;

    cout << n << ' ' << m << '\n';

    for (int i = 0; i < n; i++) {    
        // Generate random numbers between -10^9 and 10^9
        int x = rand() % 2000000000 - 1000000000;
        int y = rand() % 2000000000 - 1000000000;


        cout << x << ' ' << y << '\n';
    }

    for (int i = 0; i < m; i++) {
        // Generate random numbers between -10^9 and 10^9
        int x = rand() % 2000000000 - 1000000000;
        int y = rand() % 2000000000 - 1000000000;

        cout << x << ' ' <<  y << '\n';
    }
}