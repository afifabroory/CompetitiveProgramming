#include <iostream>

int main() {
    short score;
    std::cin >> score;

    if (0 <= score && score <= 100) std::cout << "YA\n";
    else std::cout << "TIDAK\n";
}