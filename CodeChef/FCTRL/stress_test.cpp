#include <iostream>
#include <cmath>

using namespace std;

int generate_random(int min, int max) {
    return min + (rand() % (max - min + 1));
} 

int solution(int n)
{
    int zeroes=0;
    
    int c=5;
    while((n/c)>0)//(n/c) is a non negative integer.
    {
        zeroes=zeroes+(n/c);
        c=c*5; //Divide input by a higher power of 5
    }
    return zeroes;
}

int main() {
    int n, k, sum;

    while (1) {
        sum = 0;
        n = generate_random(1, 1000);
        
        if (n>4) {
            k = floor(log10(n) / log10(5)) + 1;

            for (int i = 1; i <= k; i++) {
                sum += floor(n /((int) pow(5, i)));
            }
        }

        int s = solution(n);
        cout << n << "\n";
        cout << s << " " << sum << "\n";
        if (s != sum) {
            cout << "Error\n";
            break;
        }
    }

    return 0;
}