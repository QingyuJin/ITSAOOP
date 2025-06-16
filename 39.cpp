#include <iostream>

int main() {
    int a, b, c;
    if (!(std::cin >> a >> b >> c)) return 0;

    int A = a * a;
    int B = b * b;
    int C = c * c;

    // 判斷是否能構成三角形：任兩邊之和大於第三邊
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // 直角三角形
        if (A + B == C || B + C == A || A + C == B) {
            std::cout << "Right Triangle\n";
        }
        // 鈍角三角形
        else if (A + B < C || B + C < A || A + C < B) {
            std::cout << "Obtuse Triangle\n";
        }
        // 銳角三角形
        else {
            std::cout << "Acute Triangle\n";
        }
    } else {
        std::cout << "Not Triangle\n";
    }

    return 0;
}
