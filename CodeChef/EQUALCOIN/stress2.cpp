#include <iostream>
using namespace std;

int generate_random(int min, int max) {
    return min + (rand() % (max - min + 1));
} 

int main() {
    int test;
    cin >> test;
    while (1){
        int x, y;         
        x = generate_random(0, 100000000/10000);
        y = generate_random(0, 100000000/10000);

        string solution1;
        if (x == 0 && y%2 == 0) solution1 = "YES";
        else if (x == 0 && y%2 != 0) solution1 = "NO";
        else if (x%2 == 0 && y == 0) solution1 = "YES";
        else if (x%2 == 0 && y%2 != 0) solution1 = "YES";
        else if (x%2 == 0 && y%2 == 0) solution1 = "YES";
        else solution1 = "NO";

        string solution2;
        if (x > 0 && (x + 2*y)%2 == 0) solution2 = "YES";
        else if ((x+2*y)%4 == 0) solution2 = "YES";
        else solution2 = "NO";

        if (solution1 != solution2) {
            cout << "WRONG: " << solution1 << " " << solution2 << "\n" << x << " " << y << "\n";
            break;
        } else {
            cout << "PASS: " << solution1 << " " << solution2 << "\n" << x << " " << y << "\n";
        }

        cout << "\n";

    }
    return 0;
}