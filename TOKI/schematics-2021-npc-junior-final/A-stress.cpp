#include <iostream>
#include <set>
#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int mySolution() {
    int t;
    cin >> t;

    while (t--) {
        for (int n = 1; n <= 1000; n++) {
            set<int> mySolution;
            if (n%13 != 0) {
                set<int> factor;
                factor.insert(1);

                for (int i = 2; i < 13; i++) {
                    if (n%i == 0) factor.insert(i);
                }

                int sum = 0, lastElement;
                set<int>::iterator it = factor.begin();
                do {
                    sum += *it;
                    it++;
                } while (sum < 13 && it != factor.end());
                lastElement = *it;

                int diff;
                if (sum != 13) {
                    diff = sum - 13;
                    
                    if (factor.find(diff) != factor.end()) factor.erase(diff);
                    else {
                        set<int> tmp = factor;
                        for (it = tmp.begin(); it != tmp.end(); it++) {
                            if (tmp.find(diff - *it) != factor.end()) {
                                factor.erase(diff - *it);
                            }
                        }
                    }
                }

                cout << "\n";
                if (sum >= 13) {
                    for (it = factor.begin(); it != factor.end() && *it != lastElement; it++) {
                        cout << *it << " ";
                        mySolution.insert(*it);
                    }
                } else cout << "-1";
                cout << "\n";
                
            } else {
                mySolution.insert(13);
            }

            set<int> f;
            for (int a = 1; a <= 13 && a <= n; ++a){
                if (n%a == 0) f.insert(a);
            }
            int len = f.size();
            set<int> ans;
            for (int a = 1; a < (1 << len); ++a) {
                set<int> temp;
                int sum = 0;
                for (set<int>::iterator b = f.begin(); b != f.end(); b++) {
                    if (a & (1 << *b)) {
                        sum += *f.find(*b);
                        temp.insert(*f.find(*b));
                    }
                }
                if (sum == 13) {
                    if (ans.empty()) ans = temp;
                    else if (temp < ans) ans = temp;
                }
            }

            if (ans.size() > 0) {
                bool flag = false;
                for (set<int>::iterator it1 = ans.begin(), it2 = mySolution.begin(); it1 != ans.end(); it1++) {
                    cout << *it1 << " ";
                    flag = *ans.find(*it2) != *it2;
                    if (it2 != mySolution.end()) it2++;
                }

                if (flag) {
                    cout << "ERROR! in " << n << endl; break;
                }
            } else cout << -1 << " ";
            cout << "\n";
        }
    }
    return 0;
}

int main() {
    mySolution();
}