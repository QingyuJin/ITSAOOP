#include <iostream>

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    // 使用?几里得算法?算最大公??（GCD）
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << a << '\n';
    return 0;
}
