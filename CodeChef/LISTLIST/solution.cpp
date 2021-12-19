#include <iostream>
#include <map>

using namespace std;

unsigned mostFreq(map<unsigned, unsigned> mapElement) {    
    unsigned maxElement = 0;

    for (const auto &i : mapElement) {
        if (maxElement < i.second) {
            maxElement = i.second;
        }
    }

    return maxElement;
}

void solve(unsigned n, unsigned a[]) {
    map<unsigned, unsigned> mapElement;
    for (unsigned i = 0; i < n; i++) mapElement[a[i]] += 1; 

    if (mapElement.size() == 1) {
        cout << "0\n";
        return;
    } else if (n == mapElement.size()) {
        cout << "-1\n";
        return;
    } else {        
        cout << n - (mostFreq(mapElement)-1) << '\n';
    }
}

int main() {
    unsigned t, n;

    cin >> t;
    while (t--) {
        cin >> n;

        unsigned a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        solve(n, a);
    }

    return 0;
}