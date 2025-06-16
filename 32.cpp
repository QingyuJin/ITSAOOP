#include <iostream>

int main() {
    int number;
    if (!(std::cin >> number)) return 0;

    int original = number;
    int sum = 0;

    // 盢–计ミよ仓
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    // 浪琩琌﹊吹Ё计ミよ㎝单计
    if (sum == original) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
