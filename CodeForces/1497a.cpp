#include <iostream>
#include <vector>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2; 
  
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
  
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
  
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void MEX(int a[], int n) {
    vector<int> b;
    heapSort(a, n);

    for (int i = 0; i < n; i++) {
        if (a[i] == 0 || a[i] != a[i-1]) b.emplace_back(a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] == a[i-1]) b.emplace_back(a[i]);
    }

    for (auto x :  b) cout << x << ' ';
    cout << "\n";
}

int main() {
    int test_case, n;

    cin >> test_case; // Total test_case
    while (test_case-- > 0) {
        cin >> n; // Array size

        int a[n];
        int element_a;
        for (int i = 0; i < n; ++i) {
            cin >> element_a;
            a[i] = element_a;
        }

        MEX(a, n);
    }

    return 0;
}