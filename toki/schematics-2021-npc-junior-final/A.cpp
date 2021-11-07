#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n%13 != 0) {
            set<int> factor;
            factor.insert(1);

            for (int i = 2; i <= 13; i++) {
                cout << n%i << endl;
                cout << i << endl;
                if (n%i == 0) factor.insert(i);
                
            }

            int sum = 0, lastElement;
            set<int>::iterator it = factor.begin();
            for (; it != factor.end() && sum <= 13; it++) {
                 sum += *it;
            }

            int diff;
            if (sum != 13) {
                diff = sum - 13;

                if (factor.find(diff) != factor.end()) factor.erase(diff);
                else {
                    set<int> tmp = factor;
                    for (it = tmp.begin(); it != tmp.end(); it++) {
                        if (*tmp.find(diff - *it) != *factor.end()) {
                            factor.erase(diff - *it);
                        }
                    }
                }
            }

            if (sum >= 13) {
                for (it = factor.begin(); it != factor.end() && *it != lastElement; it++) {
                    cout << *it << " ";
                }
            } else cout << "-1";
            cout << "\n";
            
        } else {
            cout << "13\n";
        }
    }
    return 0;
}