#include <iostream>

int main() {
    int i;
    if (!(std::cin >> i)) return 0;

    if (i > 31) {
        std::cout << "Value of more than 31\n";
    } else {
        // 使用位移計算 2 的 i 次方
        unsigned long long result = 1ULL << i;
        std::cout << result << '\n';
    }

    return 0;
}
