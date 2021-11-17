#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    unsigned short t, n;
    char u, v;
    map<char, char> directed_graph;
    set<char> guess;

    cin >> t;
    while(t--) {
        cin >> n;
        n--;

        while(n--) {
            cin >> u >> v;
            guess.inset(u);
        }

        for (set<char>::iterator it = guess.begin(); it != guess.end(); it++) {
            cout << *it;
        }
    }

    return 0;
}