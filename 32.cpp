#include <iostream>

int main() {
    int number;
    if (!(std::cin >> number)) return 0;

    int original = number;
    int sum = 0;

    // 將每位數字的立方累加
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    // 檢查是否為阿姆斯壯數（各位立方和等於原數）
    if (sum == original) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
