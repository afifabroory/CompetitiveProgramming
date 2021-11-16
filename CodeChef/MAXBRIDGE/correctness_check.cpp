#include "correctness_check.h"
#include <iostream>

bool noSelfLoop(unsigned short *matrix, unsigned short n) {
    for (int i = 0; i < n; i++) {
        if (*(matrix+i*n+i) == 1) return false;
    }

    return true;
}

// Base - Index
bool noMultiGraph(unsigned short *matrix, unsigned short n) {
    std::cout << "---\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Base + (row_n * n) + col_n
            // Base + (col_n * n) + row_n
            std::cout << i << "R" << j;
            std::cout << "\n";
            if ((*(matrix + i*n + j) == 1 && *(matrix + j*n + i) == 1) && i != j) return false;
        }
    }   

    return true;
}

void printMatrix(unsigned short *matrix, unsigned short n) {
    std::cout << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << *(matrix + i*n + j) << " ";
        }
        std::cout << "\n";
    }
}
