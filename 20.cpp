#include <iostream>

int main() {
    int number;
    if (!(std::cin >> number)) return 0;

    // 以大寫十六進位輸出
    std::cout << std::uppercase << std::hex
              << number << '\n';
    return 0;
}
