#include <iostream>
#include <set>

using namespace std;

void solve(string tabel[], short n, short m) {
    set<short> totalMove;
    short g_pos , s_pos, numberOfMove, distance; 
    string cell;
    
    for (short i = 0; i < n; ++i) {
        cell = tabel[i];
        g_pos = 0; s_pos = 0; 
        distance = 0;

        for (short j = 0; j < m; ++j) {
            if (cell[j] == 'S') s_pos = j+1;
            else if (cell[j] == 'G') g_pos = j+1;

            if (g_pos != 0 && s_pos != 0) break;
        }

        distance = s_pos - g_pos;
        if (distance < 0) {
            cout << "-1\n";
            break;
        }
        else totalMove.insert(distance);
    }

    if (distance > 0) {
        numberOfMove = totalMove.size();
        cout << numberOfMove << '\n';
    }
}

int main() {
    short n, m;
    cin >> n >> m;

    string tabel[n]; string cell;
    for (short i = 0; i < n; ++i) {
        cin >> cell;
        tabel[i] = cell;
    }

    solve(tabel, n, m);

    return 0;
}