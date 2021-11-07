#include <iostream>

using namespace std;

void solve(unsigned int A[], unsigned int N, unsigned int K, unsigned int sum) {
    unsigned int num_valid = 0;
    for (unsigned int i = 0; i < N; i++) {
        if (A[i]+K > sum-A[i]) num_valid++;
    }
    
    cout << num_valid << '\n';
}

int main() {

    unsigned int T;
    cin >> T;

    while (T--) {
        unsigned int N, K, sum = 0;
        cin >> N >> K;
        
        unsigned int A[N];
        for (unsigned int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        solve(A, N, K, sum);
    }

    return 0;
}
