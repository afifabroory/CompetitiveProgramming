#include <iostream>

using namespace std;

void solve(int vN, int eM) {
    // Smallests constraint value for eM are vN - 1
    // If eM are vN - 1 then we construct a graph with
    // vN - 1 bridges/edges {1R2, 2R3, ..., (vN-1)RvN}. 
    // And from constraint it's impossible to construct a disconnected graph.
    //
    // Otherwise. if eM are greater than equal to vN
    // First we can construct a graph with vN - 1 bridges/edges. 
    // And then we construct a edge with eM Transitive relation (aRb and bRc -> aRc)

    for (int i = 1; i < vN; i++) {
        // Construct graph with vN - 1 edge
        cout << i << ' ' << i + 1 << '\n';
    }
    
    // Number of edge we need to construct decreases by vN-1
    eM -= (vN-1);

    int i = 3;
    while (eM > 0) {
        // While loop executed if eM are greater than equal to vN. 
        // Otherwise, program terminate.

        // Construct a transitive relation to the graph
        for (int j = 1; j < i-1 && eM > 0; j++) {
            cout << j << ' ' << i << '\n';
            eM--;
        }
        i++; 
    }
}

int main() {
    int t, vN, eM;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while (t--) {
        cin >> vN >> eM;
        solve(vN, eM);
    }

    return 0;
}