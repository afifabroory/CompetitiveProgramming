#include <iostream>

using namespace std;

void solve(int A[], int N, int K, int sum) {
    int num_valid;
    for (int i = 0; i < N; i++) if (A[i]+K > sum-A[K]) num_valid++;
    cout << num_valid << '\n';
}

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N, K, sum = 0;
        cin >> N >> K;
        
        cout << N << K << endl;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
            cout << sum << endl;
        }

        solve(A, N, K, sum);
    }

    return 0;
}