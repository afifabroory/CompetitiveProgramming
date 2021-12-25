#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned short test;
    cin >> test;

    while (test--) {
        unsigned short N;
        cin >> N;

        unsigned arr[N], smallest_1 = 1000000001, smallest_i = 0, smallest_2 = 1000000001, smallest_j = 0;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];

            if (arr[i] < smallest_1 && i <= (N/2)-1 || i <= (N/2)) {
                smallest_1 = arr[i];
                smallest_i = i;
            } else if (i < (N-1) && arr[i] < smallest_2 && i >= (N/2)-1 || i >= (N/2) && smallest_i != smallest_j) {
                smallest_2 = arr[i];
                smallest_j = i;
            }
        }

        //unsigned subset_P[N/2], subset_Q[N/2+1];
        cout << abs((int) (smallest_1 - smallest_2)) << '\n';
    }

    return 0;
}