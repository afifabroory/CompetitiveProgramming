#include <bits/stdc++.h>
using namespace std;

typedef struct {
    unsigned key;
    vector<unsigned> A;
} Compound;


void solve();

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}

void solve() {
    unsigned n, m;  
    cin >> n >> m;

    // O(mn^2)
    vector<Compound> W;
    for (unsigned i = 0; i < n; i++)  {
        Compound val;

        unsigned a, w;
        for (unsigned j = 0; j < m; j++) {
            cin >> a;
            auto it = upper_bound(val.A.begin(), val.A.end(), a);
            val.A.insert(it, a);
        }
        cin >> w;
        val.key = w;
        auto it2 = upper_bound(W.begin(), W.end(), w, [](unsigned key, Compound &b) {
            return key < b.key;
        });
        W.insert(it2, val);
    }

    long min = -1;
    // O(mn^2*log(n))
    for (unsigned i = 0; i < n-1; i++) {
        for (unsigned j = i+1; j < n; j++) {
            for (unsigned k = 0; k < m; k++) {
                if (binary_search(W[j].A.begin(), W[j].A.end(), W[i].A[k])) goto skip;
            }
            min = W[i].key + W[j].key;
            goto done;
            skip:
            continue;
        }
    }
    
    done:
    cout << min << '\n';
}
