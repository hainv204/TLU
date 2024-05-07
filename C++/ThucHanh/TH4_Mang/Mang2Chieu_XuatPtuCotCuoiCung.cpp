#include <iostream>

int main() {
    int n, m;
    std::cout << "Nhap so hang (n): ";
    std::cin >> n;
    std::cout << "Nhap so cot (m): ";
    std::cin >> m;

    float A[n][m];

    // Nhap gia tri mang A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Nhap gia tri tai vi tri [" << i << "][" << j << "]: ";
            std::cin >> A[i][j];
        }
    }

    // Tinh so phan tu chan cot cuoi cung
    int countEven = 0;
    for (int i = 0; i < n; i++) {
        if ((int)(A[i][m - 1]) % 2 == 0) {
            countEven++;
        }
    }

    std::cout << "So phan tu chan tren cot cuoi cung: " << countEven << std::endl;

    return 0;
}


