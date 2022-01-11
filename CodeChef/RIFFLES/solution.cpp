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

void swap(unsigned seq[], unsigned i, unsigned b) {

}

void solve() {
    unsigned n, k; cin >> n >> k;
    unsigned original = n-2;
    if (original == 0) {
        cout << "1 2\n";
        return;
    }
    k = k%original;
    if (k != 0) k = original - k;

    if (k == 1) {
        for (unsigned i = 1; i <= n; i++)  {
            if (i%2 == 1) cout << (i+1)/2 << ' ';
            else cout << n/2 + i/2 << ' ';
        }
    } else if (k != 0) {
        unsigned seq[n], seqTemp[n] = {0};
        for (unsigned i = 1; i <= n; i++)  {
            if (i%2 == 1) seq[i-1] = (i+1)/2;
            else seq[i-1] = n/2 + i/2;
        }
        k--;
        for (unsigned i = 0; i < k; i++) {
            for (unsigned j = 2; j < n; j++) {
                if (j%2 == 1) {
                    seqTemp[j-1] = seq[j-1];
                    if (seqTemp[(j+1)/2-1] != 0) {
                        seq[j-1] = seqTemp[(j+1)/2-1];
                        seqTemp[(j+1)/2-1] = 0;
                        continue;
                    }                    
                    seq[j-1] = seq[(j+1)/2-1];
                } else  {
                    seqTemp[j-1] = seq[j-1];
                    if (seqTemp[n/2 + j/2-1] != 0) {
                        seq[j-1] = seqTemp[n/2 + j/2-1];
                        seqTemp[n/2 + j/2-1] = 0;
                        continue;
                    }
                    seq[j-1] = seq[n/2 + j/2-1];
                }
            }
            if ((i+1) == k) break;
            for (unsigned i = 0; i < n; i++) {
                seqTemp[i] = 0;
            }
        }
        for (unsigned i = 0; i < n-1; i++) cout << seq[i] << ' ';
        cout << seq[n-1] << '\n';
    } else {
        for (unsigned i = 1; i < n; i++) cout << i << ' ';
        cout << n << '\n';
    }
}

// void solve() {
//     unsigned n, k; cin >> n >> k;
//     unsigned original = n-2;   // What happen if n == 2?
//     if (original == 0) {
//         cout << "1 0\n";
//     }
//     else k = k%original;
//     if (k == original-1) {
//         cout << "[1]\n";
//         cout << 1 << ' ';
//         for (int i = 2; i < n-1; i += 2) cout << i << ' ';
//         for (int i = 3; i < n-1; i += 2) cout << i << ' ';
//         cout << n << '\n';
//     } else if (k == 1) {
//         cout << "[2]\n";
//         cout << 1 << ' ';
//         for (int i = 3; i < n-1; i += 2) cout << i << ' ';
//         for (int i = 2; i < n-1; i += 2) cout << i << ' ';
//         cout << n << '\n';
//     } else if (k%original == 0) {
//         cout << "[3]\n";
//         for (unsigned i = 1; i < n; i++) cout << i << ' ';
//         cout << n << '\n';
//     } else {
//         cout << "[4]\n";
//         //unordered_map<unsigned, unsigned> cycle;
//         map<unsigned, unsigned> cycle;
//         unsigned lookup[n-2], connected[n-2] = {0};
//         unsigned index = 2, elLeft = n-2, cnt = 2, pos = 1;
//         connected[0] = 2; lookup[0] = 0; // 2-2
//         while (elLeft) {
//             if (index%2 == 0 && connected[index] == 0) { 
//                 connected[pos] = (index/2)+(n/2);
//                 lookup[(index/2)+(n/2)-2] = pos;
//                 index = (index/2)+(n/2);
//                 elLeft--;
//                 pos++;
//             }
//             else if (index%2 == 1) {
//                 connected[pos] = (index+1)/2;
//                 lookup[(index+1)/2-2] = pos;
//                 index = (index+1)/2;
//                 elLeft--;
//                 pos++;
//             }

//             if (connected[index] != 0) {
//                 index = 2*cnt;
//                 cnt++;
//             }
//         }

//         unsigned seq[n-2], key, operation;
//         for (unsigned i = 0; i < n-2; i++) {
//             key = i+2; operation = k;
//             while (operation--) key = cycle[key];
//             seq[key-2] = i+2;
//         }

//         cout << "1 ";
//         for (unsigned i = 0; i < n-2; i++) cout << seq[i] << ' ';
//         cout << n << '\n';
//     }
// }