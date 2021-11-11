#include <iostream>

using namespace std;

int main() {
    unsigned int t, k, x, y, a, b, petrol, diesel;
    cin >> t;

    while (t--) {
        cin >> x >> y >> a >> b >> k;
        
        petrol = x + (k*a);
        diesel = y + (k*b);

        if (petrol > diesel) cout << "DIESEL\n";
        else if (petrol < diesel) cout << "PETROL\n";
        else cout << "SAME PRICE\n";
    }

    return 0;
}