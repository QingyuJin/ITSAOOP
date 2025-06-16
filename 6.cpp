#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a;
    if (!(std::cin >> a)) return 0;

    // 先將 (a * 1.6) 乘以 10，四捨五入，再除以 10.0
    double result = std::round(a * 1.6 * 10.0) / 10.0;

    std::cout << std::fixed << std::setprecision(1)
              << result << '\n';
    return 0;
}
