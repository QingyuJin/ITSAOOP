#include <iostream>

int main() {
    int num;
    if (!(std::cin >> num)) return 0;

    if (num < -128 || num > 127) {
        std::cout << "Input out of range\n";
        return 1;
    }

    // 輸出 num 的 8 位元二進制（two's complement）
    for (int i = 7; i >= 0; --i) {
        int bit = (num >> i) & 1;
        std::cout << bit;
    }
    std::cout << '\n';

    return 0;
}
