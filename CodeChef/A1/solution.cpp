#include <bits/stdc++.h>
using namespace std;

// UNSOLVED

typedef struct {
    unsigned short value;
    unsigned short count;
} Money;

void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--) solve();
    return 0;
}

bool modified_binary_search(vector<unsigned short> &arr, unsigned short target) {
    unsigned low = 0;
    unsigned high = arr.size()-1;
    unsigned mid;

    while (true) 
        mid = (high - low)/2 + low;

        if (arr[mid] > target) high = mid-1;
        else if (arr[mid] <= target) return true;

        if (high == low) return false;
    }
}

void solve() {
    unsigned short n, m;
    cin >> n >> m;

    set<unsigned short> tmpKey;
    map<unsigned short, unsigned short> N;

    unsigned short tmp;
    for (unsigned i = 0; i < n; i++) {
        cin >> tmp;
        N[tmp] += 1;
        tmpKey.insert(tmp);
    }

    vector<unsigned short> key(tmpKey.rbegin(), tmpKey.rend());
    tmp = 0; // Reuse variable
    for (unsigned i = key.size()-1; i >= 1; i--)  {
        tmp += key[i];
        if (modified_binary_search(arr, m-tmp)) {
            for (unsigned j = i-1; j >= 1; j--) {
            
            }
        }
    }

    cout << "ok\n";
    cout << "ok\n";
    cout << "ok\n";
}