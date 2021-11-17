#include <iostream>

using namespace std;

int main() {
    unsigned short t, a, b, p, q;
    unsigned short origin, dest;
    
    cin >> t;
    while(t--) {
        cin >> a >> b >> p >> q;

        if (a == p && b == q) {
            cout << "0\n";
        }
        else {
            origin = (a+b)%2;
            dest = (p+q)%2;

            if (origin != dest) cout << "1\n";
            else if (origin == dest) cout << "2\n";
        }        
    }


    return 0;
}