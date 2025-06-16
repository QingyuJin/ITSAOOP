#include <iostream>

int main() {
    int y;
    if (!(std::cin >> y)) return 0;

    // 判斷閏年：能被4整除，且（能被400整除 或 不能被100整除）
    if (y % 4 == 0 && (y % 400 == 0 || y % 100 != 0)) {
        std::cout << "Bissextile Year\n";
    } else {
        std::cout << "Common Year\n";
    }

    return 0;
}
