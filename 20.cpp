#include <iostream>

int main() {
    int number;
    if (!(std::cin >> number)) return 0;

    // �H�j�g�̤��i���X
    std::cout << std::uppercase << std::hex
              << number << '\n';
    return 0;
}
