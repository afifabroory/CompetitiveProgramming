#include <bits/stdc++.h>
using namespace std;

// UNSOLVED

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

unsigned max_element(vector<unsigned>::iterator begin, vector<unsigned>::iterator end, vector<unsigned> &v) {
    unsigned index = 0, indexMax = 0, maxEl = 0;
    for (; begin != end; begin++) {
        if (*begin > maxEl) {
            maxEl = *begin;
            indexMax = index;
        }
        index++;
    }

    v.erase(v.begin()+indexMax);
    return maxEl;
}

unsigned min_element(vector<unsigned>::iterator begin, vector<unsigned>::iterator end, vector<unsigned> &v) {
    unsigned index = 0, indexMin = 0, minEl = 0;
    for (; begin != end; begin++) {
        if (*begin > minEl) {
            minEl = *begin;
            indexMin = index;
        }
        index++;
    }

    v.erase(v.begin()+indexMin);
    return minEl;
}

void solve() {
    unsigned n;
    cin >> n;
    vector<unsigned> a; a.reserve(n*(n-1)/2); // a here, mean b don't confuse :D
    unsigned copyA[n];
    for (unsigned i = 0; i < n; i++) {
        cin >> copyA[i];
    }

    if (n > 2) {
        for (unsigned i = 0; i < n-1; i++) {
            for (unsigned j = i+1; j < n; j++) a.push_back(copyA[i] & copyA[j]);
        }

        sort(a.begin(), a.end());
        while (a.size() > 1) {
            vector<unsigned> b;
            b.reserve(a.size());
            while (a.size() > 0) {
                unsigned min, max;
                // max = max_element(a.begin(), a.end(), a);
                // min = min_element(a.begin(), a.end(), a);
                if (a.size() != 1) {
                    max = a.back();
                    min = a.front();   
                    a.pop_back();
                    a.erase(a.begin());                                                                                                                                                                                                                                                 
                    b.push_back(max | min);
                } else {
                    b.push_back(a[0]);
                    break;
                }
                
            }
            sort(b.begin(), b.begin());
            a.assign(b.begin(), b.end());
        }
        cout << a[0] << '\n';
    } else {
        cout << (copyA[0] & copyA[1]) << '\n';
    }
}