#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

void solve(long n, pair<long, long> point_s[], long m, pair<long, long> point_t[]) {
    long smallestDistance, diff;
    for (long i = 0; i < m; i++) {
        smallestDistance = abs(point_s[0].first - point_t[i].first) + abs(point_s[0].second - point_t[i].second);
        for (long j = 1; j < n; j++) {
            diff = abs(point_s[j].first - point_t[i].first) + abs(point_s[j].second - point_t[i].second);
            if (smallestDistance > diff) {
                smallestDistance = diff;
            }
        }

        cout << smallestDistance << '\n';
    }
}

int main() {
    unsigned n, m;
    long x, y;

    cin >> n >> m;

    pair<long, long> point_s[n];
    for (long i = 0; i < n; i++) {
        cin >> x >> y;
        point_s[i] = make_pair(x,y);
    }

    pair<long, long> point_t[m];
    for (long i = 0; i < m; i++) {
        cin >> x >> y;
        point_t[i] = make_pair(x,y);
    }

    solve(n, point_s, m, point_t);

    return 0;
}