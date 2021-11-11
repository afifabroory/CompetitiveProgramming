#include <iostream>

using namespace std;

int main() {
    unsigned short int t;
    cin >> t;

    unsigned int n, a, operation;
    bool shiftFlag = false;
    while (t--) {
        operation = 0;
        //cout << "DEBUG t: " << t << "\n";

        // Each test case has time complexity O(n)
        cin >> n;
        if (n == 1) {
            cout << 0;
            cin >> a;
        }
        else {
            while (n--) {
                //cout << "DEBUG n: " << n << "\n";
                cin >> a;
                if (shiftFlag && a%2 != 0) a--;
                if (a%2 != 0 && a > 1) {
                    operation++; 
                    shiftFlag = true;
                } else shiftFlag = false;
            }

            cout << operation;
        }
        cout << "\n";
    }

    return 0;
}