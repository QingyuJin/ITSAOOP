#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a;
    if (!(std::cin >> a)) return 0;

    // ���N (a * 1.6) ���H 10�A�|�ˤ��J�A�A���H 10.0
    double result = std::round(a * 1.6 * 10.0) / 10.0;

    std::cout << std::fixed << std::setprecision(1)
              << result << '\n';
    return 0;
}
