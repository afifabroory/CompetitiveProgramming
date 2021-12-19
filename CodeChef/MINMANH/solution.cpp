#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct point {
    long x, y;
};

// Strict Week Ordering function
bool sortFunction (point i, point j) { return i.x < j.x; }
bool uniqueFunction (point i, point j) { return i.x == j.x && i.y == j.y; }

long distance(point i, point j) {
    return abs(i.x - j.x) + abs(i.y - j.y); 
}

// Print array of points
void printArray(point arr[], long n) {
    for (unsigned i = 0; i < n; i++) {
        cout << "Index of " << i << " " << arr[i].x << " " << arr[i].y << endl;
    }
}

long bruteForce(point point_s[], point point_t, long n) {
    long smallest = distance(point_s[0], point_t);
    long diff;
    
    for (unsigned i = 1; i < n; i++) {
        diff = distance(point_s[i], point_t);
        if (smallest > diff) smallest = diff;
    }
    
    return smallest;
}

long divide(point point_s[], point point_t, long start, long end) {
    if (end <= 15) {
        return bruteForce(point_s, point_t, end+1);
    } else {
        long minL = divide(point_s, point_t, 0, end/2);
        long minR = divide(point_s+(end/2), point_t, 0, end-(end/2));

        if (minL > minR) return minR;
        else return minL;
    }
}

void solve(long size, point point_s[], unsigned m, point point_t[]) {
    long mid = size/2, smallest, smallestXL, smallestXR;

    for (unsigned i = 0; i < m; i++) {        
        if (size <= 3) {
            smallest = bruteForce(point_s, point_t[i], size); 
        } else {
            smallestXL = divide(point_s, point_t[i], 0, mid);
            smallestXR = divide(point_s+mid, point_t[i], 0, size-mid);

            if (smallestXL < smallestXR) smallest = smallestXL;
            else smallest = smallestXR;
        }
        cout << smallest << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 

    unsigned n, m;
    cin >> n >> m;

    struct point newPoint;

    long x, y;
    point point_s[n];
    for (long i = 0; i < n; i++) {
        cin >> x >> y;

        newPoint.x = x;
        newPoint.y = y;

        point_s[i] = newPoint;
    }

    sort(point_s, point_s+n, sortFunction);
    unique(point_s, point_s+n, uniqueFunction);

    point point_t[m];
    for (long i = 0; i < m; i++) {
        cin >> x >> y;
        
        newPoint.x = x;
        newPoint.y = y;

        point_t[i] = newPoint;
    }

    solve(n, point_s, m, point_t);

    return 0;
}