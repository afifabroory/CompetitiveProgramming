#include <iostream>
#include <unordered_map>
#include <vector>

/* UNFINISHED */

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    unsigned size, a;
    while (test--) {
        cin >> size;

        unordered_map<unsigned, vector<unsigned>> elements;
        vector<unsigned> element;
        for (int i = 0; i < size; i++) {
            cin >> a;
            elements[a].push_back(i+1);
            element.push_back(a);
        }
        

        if (elements.size() == 1 && (elements.begin())->first == elements.begin()->second.size()) {
            cout << elements.begin()->first << '\n';
            continue;
        }

        unsigned sum = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                for (int a = i; a <= j; a++)  {
                    vector<unsigned> temp = elements[element[a]];
                    int total = 0, n = 0;

                    while (n < temp.size()) {
                        if (temp[n] <= (j+1)) total++;
                        n++;
                    }

                    if (total == (j+1)) sum++;
                }
            }
        }

        cout << sum << '\n';
    }
}