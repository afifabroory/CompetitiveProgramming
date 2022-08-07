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

void transpose(unsigned *matrix, unsigned row, unsigned col, unsigned n) {
    for (unsigned i = 0; i < col; i++) {
        unsigned tmp = matrix[row*n + i];          // tmp          = matrix[j][i]
        matrix[row*n + i] = matrix[(i*n) + col];   // matrix[j][i] = matrix[i][j]
        matrix[(i*n) + col] = tmp;                 // matrix[i][j] = tmp
    }
}

// void solve() {
//     unsigned short n;
//     cin >> n;

//     unsigned matrix[n*n];
//     unsigned sorted_matrix[n*n];

//     for (unsigned i = 0; i < n*n; i++) {
//         cin >> matrix[i];
//         sorted_matrix[i] = matrix[i];
//     }

//     sort(sorted_matrix, sorted_matrix+(n*n));

//     unsigned opt = 0;
//     for (unsigned i = 0; i < n*n; i++)
//         if (sorted_matrix[i] != matrix[i]) 
//             goto do_opt;
//     goto same;
    
//     do_opt:
//         while (true) {
//             map<pair<unsigned, unsigned>, unsigned> not_in_position;
//             map<pair<unsigned, unsigned>, unsigned> in_position;

//             unsigned subMatrixL = UINT_MAX;

//             for (unsigned i = 0; i < n*n; i++) {
//                 if ((floor((float) i/n)*n + floor((float) i/n)) == i) continue;

//                 // if (matrix[i] != sorted_matrix[i])
//                 //     not_in_position[make_pair(i, floor((float) i/n))] = matrix[i];
//                 // else {
//                 //     in_position[make_pair(i, floor((float) i/n))] = matrix[i];
//                 //     subMatrixL = min(subMatrixL, n - ((i%n) + 1));
//                 // }

//                 if (matrix[i] == sorted_matrix[i]) {
//                     in_position[make_pair(i, floor((float) i/n))] = matrix[i];

//                     if (floor(i/n) == 0) {
//                         subMatrixL = (i%n) + 1;
//                         break;
//                     }
//                 }
//             }

//             if (in_position.size() == 0) {
//                 subMatrixL = 0;
//                 transpose(matrix, subMatrixL, n);
//                 opt++;
//                 break;
//             } else {
//                 transpose(matrix, subMatrixL, n);
//                 opt++;
//             }
//         }
    
//     same:



//     cout << opt << '\n';
// }

// void solve() {
    // unsigned short n;
    // cin >> n;

    // unsigned matrix[n*n];
    // unsigned sorted_matrix[n*n];

    // for (unsigned i = 0; i < n*n; i++) {
    //     cin >> matrix[i];
    //     sorted_matrix[i] = matrix[i];
    // }

//     sort(sorted_matrix, sorted_matrix+(n*n));

//     unsigned opt = 0;
//     while (true) {
//         map<pair<unsigned, unsigned>, unsigned> not_in_position;
//         map<pair<unsigned, unsigned>, unsigned> in_position;

//         unsigned subMatrixL = UINT_MAX;

//         for (unsigned i = 0; i < n*n; i++) {
//             if ((floor((float) i/n)*n + floor((float) i/n)) == i) continue;

//             // if (matrix[i] != sorted_matrix[i])
//             //     not_in_position[make_pair(i, floor((float) i/n))] = matrix[i];
//             // else {
//             //     in_position[make_pair(i, floor((float) i/n))] = matrix[i];
//             //     subMatrixL = min(subMatrixL, n - ((i%n) + 1));
//             // }

//             if (matrix[i] == sorted_matrix[i]) {
//                 in_position[make_pair(i, floor((float) i/n))] = matrix[i];

//                 if (floor(i/n) == 0) {
//                     subMatrixL = (i%n);
//                     break;
//                 }
//             }
//         }

//         if (in_position.size() == 0) {
//             subMatrixL = 0;
//             transpose(matrix, subMatrixL, n);
//             opt++;
//             break;
//         } else if (in_position.size() == n*n - n)
//             break;
//         else {
//             transpose(matrix, subMatrixL, n);
//             opt++;
//         }
//     }
    

//     cout << opt << '\n';
// }

void solve() {  
    unsigned short n;
    cin >> n;

    unsigned matrix[n*n];
    unsigned sorted_matrix[n*n];

    for (unsigned i = 0; i < n*n; i++) {
        cin >> matrix[i];
        sorted_matrix[i] = matrix[i];
    }
    sort(sorted_matrix, sorted_matrix+(n*n));

    unsigned minimum_operation = 0;
    for (unsigned i = 0; i < n*n; i++) 
        if (matrix[i] != sorted_matrix[i]) goto operation;
    goto skip_operation;

    operation:
    for (unsigned i = 0; i < n*n; i++) {
        unsigned k = i%n; // col
        unsigned l = (unsigned) floor((float) i/n); // row

        if (k == l)
            continue;
        
        if (matrix[i+(n-1)] > matrix[k + l*n]) {
            transpose(matrix, l, k+1, n);
            minimum_operation++;
        }
    }

    skip_operation:
    cout << minimum_operation << '\n';
}