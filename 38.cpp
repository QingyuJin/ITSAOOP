#include <iostream>

int main() {
    int a, b, c;
    if (!(std::cin >> a >> b >> c)) return 0;

    // 判斷是否能構成三角形：任兩邊和大於第三邊
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "fit\n";
    } else {
        std::cout << "unfit\n";
    }

    return 0;
}
