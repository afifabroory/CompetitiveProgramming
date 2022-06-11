#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    unsigned short n;
    cin >> n;

    unsigned k;
    cin >> k;

    vector<unsigned> a(n);
    for (unsigned i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 2) 
        cout << abs((long) a[0]+a[1]-k) << ' ' << 1 << "\n";
    else {
        unsigned min = UINT_MAX, total;
        for (unsigned i = 0; i < n-1; i++)  {
            for (unsigned j = i+1; j < n; j++) {
                unsigned diff = abs((long) a[i]+a[j]-k);
                if (diff < min) {
                    total = 0;
                    min = diff;
                    total++;
                } else if (diff == min) total++;
            }
        }
        cout << min << ' ' << total << '\n';
    }


    /* map<unsigned, unsigned> a;  // with assumption the key value are i != j
    unsigned k, tmp;
    cin >> k;
    for (unsigned short i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
    }

    #define exists(e) (a.find((e)) != a.end())

    unsigned total = 0, min = UINT_MAX, i = 0;
    #define first(e) (e->first)
    #define second(e) (e->second)

    // Finding minimum number of elements first before get number of pairs
     for (auto i = a.begin(); i != a.end(); i++) {
        for (auto j = i; j != a.end(); j++)  {
            unsigned possibleSolution = first(i)+first(j)-k;
            if (possibleSolution < min) min = possibleSolution;
        }
    } 

    for (auto i = a.begin(); i != prev(a.end()); i++) {
        for (auto j = next(i); j != a.end(); j++)  {
            if (first(i)+first(j) == k-min) {
                cout << first(i) << ' ' << first(j) << ' ' << " [1]\n";

                if (second(i)) 
                    total += second(i);
                else if (second(j)) 
                    total += second(j);
                else
                    total++;
            }
            if (first(i)+first(j) == k+min) {
                cout << first(i) << ' ' << first(j) << ' ' << " [2]\n";

                if (second(i)) 
                    total += second(i);
                else if (second(j)) 
                    total += second(j);
                else
                    total++;
            }     
        }
    } 
    
    cout << min << ' ' << total << '\n'; */
}

